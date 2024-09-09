/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:36:16 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/13 14:39:39 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	i;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (*big && i < len)
	{
		j = 0;
		while (big[j] && big[j] == little[j] && i + j < len)
		{
			if (*(little + j + 1) == '\0')
				return ((char *)(big));
			j++;
		}
		big++;
		i++;
	}
	return (NULL);
}
/*int main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	printf("%s",ft_strnstr(haystack, "aabc", 9));
}*/
