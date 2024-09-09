/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:30:36 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/13 19:15:26 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	size_t	b;
	char	*result;

	a = ft_strlen(s1);
	b = ft_strlen(s2);
	result = malloc(sizeof(char) * (a + b + 1));
	if (!result)
		return (0);
	a = 0;
	while (*(s1 + a))
	{
		*(result + a) = *(s1 + a);
		a++;
	}
	b = 0;
	while (*(s2 + b))
		*(result + a++) = *(s2 + b++);
	*(result + a) = '\0';
	return (result);
}

/*int main()
{
	char str1[15] = "Just let";
	char str2[30] = "me go moulinett";
	char *dest1;
	dest1 = ft_strjoin(str1,str2);
	printf("MY result %s", dest1);
	free(dest1);
}*/
