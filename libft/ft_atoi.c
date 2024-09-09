/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:31:50 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/11 13:26:45 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	minus;
	int	nb;

	i = 0;
	minus = 1;
	nb = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			minus = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	return (nb * minus);
}

/*int main() {
	const char *tests[] = {
		"123",
		"-456",
		"    789",
		"  +321",
		"  - 123", // test błędnego formatu
		"  9999999999999999999999999999", // test przepelnienia
		NULL // zakończ tablicę pustym wskaźnikiem
	};

	int i = 0;
	while (tests[i] != NULL) {
		const char *str = tests[i];
		int expected = atoi(str);
		int result = ft_atoi(str);
		printf("Test %d:\n", i + 1);
		printf("Input string: \"%s\"\n", str);
		printf("Expected result (atoi): %d\n", expected);
		printf("Result (ft_atoi): %d\n", result);
		if (expected == result) {
			printf("Test passed!\n");
		} else {
			printf("Test failed!\n");
		}
		printf("\n");
		i++;
	}

	return 0;
}*/