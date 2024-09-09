/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:34:21 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/14 18:43:25 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	p = malloc(sizeof(char) * (ft_strlen(s)+1));
	if (!p)
		return (NULL);
	while (*(s + i))
	{
		*(p + i) = *(char *)(s + i);
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
/*int main()
{
	char str[30] = "wow it does work ez";
	char *res = strdup(str);
	char *res2 = ft_strdup(str);
	
	printf("Sys result %s\n",res);
	printf("MY result %s\n",res2);
	free(res);
	free(res2);
}*/
