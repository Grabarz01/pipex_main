/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 08:36:41 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/13 19:29:44 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ssrc;
	char	*sdst;

	ssrc = (char *)src;
	sdst = (char *)dest;
	i = 0;
	if (sdst > ssrc)
	{
		while (n-- > 0)
			sdst[n] = ssrc[n];
	}
	else
	{
		while (i < n)
		{
			sdst[i] = ssrc[i];
			i++;
		}
	}
	return (dest);
}
