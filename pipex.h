#ifndef PIPEX_H
#define PIPEX_H

# include "libft/libft.h"
# include "get_next_line/get_next_line.h"
# include <fcntl.h>
# include <wait.h>

void	ft_free_split(char **args);
void	ft_pipex(char **argv, char **env);
int	ft_read_file(int file_in);
int ft_open_read (char *argv);
void ft_error_manager(int x);
char	*ft_get_env(char **env, char *env_var);
char	*ft_path(char *argv, char *my_var, char *path_env);
void 	ft_execve(char **env, char *argv);
int 	ft_open_write(char *argv);
void 	ft_close_fds(int x, int y, int z);
void 	ft_args_checker(int argc, char **argv);



#endif