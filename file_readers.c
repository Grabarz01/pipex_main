/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_readers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:18:18 by fgrabows          #+#    #+#             */
/*   Updated: 2024/09/09 10:17:07 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int ft_open_read (char *argv)
{
	int fd;

	if (access(argv, F_OK) == -1)
	{
		ft_putstr_fd(argv, 2);
		perror(" ");
		return (-1);
	}
	fd = open(argv, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_fd(argv,2);
		perror(" ");
		return(-1);
	}
	if (fd < 0)
		exit(1);
	return (fd);
}
//1 - pipex
//2 - bonus
int ft_open_write(char *argv)
{
	int fd;
	
	fd = open(argv, O_WRONLY | O_TRUNC | O_CREAT, 0666);
	if (fd < 0)
	{
		ft_putstr_fd(argv,2);
		perror(" ");
	}
	return (fd);
}
