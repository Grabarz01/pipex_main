/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:58:56 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/11 14:13:13 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'));
}
/*int main()
{
	char str[50] = "warsaw 42 **----+++3123";
	int s = 0;
	while(str[s])
	{
		printf("%c is alpha: %d\n", str[s], ft_isalpha(str[s]));
		s++;
	}
	return (1);
}*/
