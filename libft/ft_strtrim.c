/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:15:39 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/13 19:09:54 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set_check(int c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		end;
	size_t		start;
	char		*str;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_set_check(s1[start], set))
		start++;
	while (end > start && ft_set_check(s1[end - 1], set))
		end--;
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}

/*int main()
{
    char str[] = "?DoDoes doit work?";
    char set[] = "?Dokesdditwrk ";
    printf("%s === %s",str,ft_strtrim(str,set));    
}*/
