/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:18:27 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/11 14:08:35 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int main()
{
	char str[50] = "warsaw 42 **----+++3123";
	int s = 0;
	while(str[s])
	{
		printf("%c is alnum: %d\n", str[s], ft_isalnum(str[s]));
		s++;
	}
	return (1);
}*/
