/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:11:59 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/11 14:59:26 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}
/*int main()
{
	char str[60] ="It's really long string for Warsaw 42 tests";
	int s = 0;
	while(str[s])
	{
		printf("My function result: %p\n",ft_memchr(str,str[s],s+1));
		printf("SYS function result: %p\n",ft_memchr(str,str[s],s+1));        
		printf("-----------------------------\n");
		s++;
	}
	return(0);
}*/
