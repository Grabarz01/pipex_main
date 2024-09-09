/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:27:26 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/13 19:31:36 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest)
		return (0);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}
/*int main()
{
	char str1[30] = "LONG story bad ending";
	char dest[30];
	char dest2[30];
	memcpy(str1,dest,30);
	ft_memcpy(str1,dest2,30);
	printf("SYS result = %s\n", (dest));
	printf(" My result = %s", (dest2));
	if (memcmp(dest,dest2,30))
		printf("\nPASS");
	else
		printf("\nWRONG");
}*/
