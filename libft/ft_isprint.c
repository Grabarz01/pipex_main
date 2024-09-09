/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:08:17 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/11 14:18:03 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

/*int main()
{
	char str[50] = "war\n\nsaw 42 **----+++3123";
	int s = 0;
	while(str[s])
	{
		printf("%c is ascii: %d\n", str[s], ft_isprint(str[s]));
		s++;
	}
	return (1);
}*/
