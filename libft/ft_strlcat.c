/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:50:01 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/13 14:08:16 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dlen >= size)
		return (slen + size);
	j = dlen;
	if (dlen < size - 1 && size > 0)
	{
		while (src[i] && j < (size - 1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (dlen + slen);
}

/*int main()
{
	char src[30] = "My long stri14";
	char dest[30] = "My second stri16";
	printf("%zu\n",ft_strlcat(dest,src,10));
}*/