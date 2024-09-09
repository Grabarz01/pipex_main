/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:46:46 by fgrabows          #+#    #+#             */
/*   Updated: 2024/09/09 10:18:30 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "pipex.h"

void	ft_incubator(int pid1, int pid2)
{
	int	status;

	waitpid(pid1, NULL, 0);
	waitpid(pid2, &status, 0);
	exit(WEXITSTATUS(status));
}
//fd1[0],fd1[1] - opened
// 0 - normal
// 1 - normal 
void	ft_first_child(char **argv, int fd[2], char **env)
{	
	int	file_in;
	
	close(fd[0]);
	file_in = ft_open_read(argv[1]);
	if (file_in < 0)
	{
		ft_close_fds(fd[1], -1, -1);
		exit(1);
	}
	dup2(file_in, STDIN_FILENO);
	close(file_in);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	ft_execve(env, argv[2]);
}
// fd1 [0]x, fd2[1]x-opened
// 0 - normal
// 1 - normal
void	ft_second_child(char **argv, int fd1[2], int fd2[2], char **env)
{
	int	file_out;
	
	dup2(fd1[0], STDIN_FILENO);
	close(fd1[0]);
	file_out = ft_open_write(argv[4]);
	if(file_out < 0)
	{
		close(fd2[1]);
		exit(EXIT_FAILURE);
	}
	dup2(file_out, STDOUT_FILENO);
	close(file_out);
	ft_execve(env, argv[3]);
}

void	ft_pipex(char **argv, char **env)
{
	int	pid1;
	int	pid2;
	int	fd1[2];
	int	fd2[2];
	
	if (pipe(fd1) == -1)
		ft_error_manager(0);
	pid1 = fork();
	if (pid1 == -1)
		ft_error_manager(0);
	else if (pid1 == 0)
		ft_first_child(argv, fd1, env);
	close(fd1[1]);
	if (pipe(fd2) == -1)
		ft_error_manager(0);
	close(fd2[0]);
	pid2 = fork();
	if (pid2 == -1)
		ft_error_manager(0);
	if (pid2 == 0)
		ft_second_child(argv, fd1, fd2, env);
	ft_close_fds(fd2[1], fd1[0], -1);
	ft_incubator(pid1, pid2);
}
int	main(int argc, char *argv[], char *env[])
{	
	if (argc < 5)
		ft_error_manager(1);
	else if (argc > 5)
	{
		ft_putstr_fd("Too many arguments\n", 2);
		exit(1);
	}
	else
	{
		ft_args_checker(argc, argv);
		ft_pipex(argv, env);
	}
	return (0);
}

