/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checkers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:16:33 by fgrabows          #+#    #+#             */
/*   Updated: 2024/09/09 10:18:12 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"


static int	ft_empty_arg(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] && (argv[i] == ' ' || argv[i] == '\t' || argv[i] == '\f'
		|| argv[i] == '\v' || argv[i] == '\n' || argv[i] == '\r'))
		i++;
	if (!argv[i])
		return (0);
	return (1);
}
void	ft_args_checker(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i <= argc - 1)
	{
		if (!argv[i][0] || ft_empty_arg(argv[i]) == 0)
		{
			ft_putstr_fd("Error: invalid argument",2);
			exit(1);
		}
		i++;
	}
}