/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:04:27 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/11 14:16:09 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*int main()
{
	char str[50] = "ŻĄŒΩwarsaw 42 **----+++3123";
	int s = 0;
	while(str[s])
	{
		printf("%c is digit: %d\n", str[s], ft_isdigit(str[s]));
		s++;
	}
	return (1);
}*/
