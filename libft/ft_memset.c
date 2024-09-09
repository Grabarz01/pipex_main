/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:25:42 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/12 12:00:40 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;

	if (!s)
		return (0);
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = uc;
		i++;
	}
	return (s);
}
/*int main()
{
	char str1[30] = "my message to evaluator";
	char str2[30] = "my message to evaluator";
	char c = 'c';
	memset(str1,c,ft_strlen(str1));
	ft_memset(str2,c,ft_strlen(str2));
	printf("Sys function result %s\n", str1);
	printf("My function result %s", str2);
}*/
