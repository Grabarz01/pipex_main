/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:01:42 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/11 14:14:15 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*int main()
{
	char str[50] = "ŻĄŒΩwarsaw 42 **----+++3123";
	int s = 0;
	while(str[s])
	{
		printf("%c is ascii: %d\n", str[s], ft_isascii(str[s]));
		s++;
	}
	return (1);
}*/
