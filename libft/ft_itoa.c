/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 07:59:45 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/11 14:47:13 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_int2ascii(char *str, int n, int x)
{
	int	i;

	i = x;
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	while (n != 0)
	{
		str[--i] = (n % 10) + '0';
		n = n / 10;
	}
	str[x] = '\0';
}

static int	ft_countnumbers(int n)
{
	int	number;
	int	counter;

	number = n;
	counter = 0;
	if (number < 0)
	{
		counter++;
		number = number * (-1);
	}
	while (number != 0)
	{
		number = number / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		x;

	x = ft_countnumbers(n);
	if (n == 0)
	{
		str = ft_strdup("0");
		return (str);
	}
	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	str = malloc(sizeof(char) * (x + 1));
	if (!str)
		return (NULL);
	ft_int2ascii(str, n, x);
	return (str);
}

/*int main()
{
	int i = 10;
	int n = -500;
	while(i)
	{
		
		char *str = ft_itoa(n);
		printf("%d ---- %s\n", n ,str);
		free(str);
		i--;
		n += 500; 
	}
	//MIN
	i = INT_MIN;
	char *sts = ft_itoa(i);
	printf("%d ---- %s\n", i ,sts);
	free(sts);
	//MAX
	i = INT_MAX;
	sts = ft_itoa(i);
	printf("%d ---- %s\n", i ,sts);
	free(sts);
	i = INT_MAX;
	return(0);
	// ccc ft_itoa.c ft_strdup.c
}*/
