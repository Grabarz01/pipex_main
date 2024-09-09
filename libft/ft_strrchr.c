/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:33:22 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/13 13:18:48 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == (char) c)
		{
			p = (char *)s;
		}
		s++;
	}
	if ((char) c == '\0')
		return ((char *)s);
	if (!p)
		return (NULL);
	return (p);
}

/*int main()
{
	char str[30] = "  ss";
	char c = 's';
	printf("%p\n",ft_strrchr(str,c));
	printf("%p\n",strrchr(str,c));
}*/