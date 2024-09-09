/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:43:41 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/16 08:15:35 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;
	unsigned int	i;

	if (!*s || !*f)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		(*f)(i, s + i);
		i++;
	}
}
/*void convert_to_upper(unsigned int index, char *c)
{
    *c = toupper(*c);
}

int main()
{
	char str[30] = "its getting worse";
	ft_striteri(str,&convert_to_upper);
	printf("%s",str);
}*/