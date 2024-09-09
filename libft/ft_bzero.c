/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:01:09 by fgrabows          #+#    #+#             */
/*   Updated: 2024/03/11 13:31:08 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
		*(ptr++) = 0;
}

/*int main() 
{
    // Przykładowe testy
    char str1[] = "";
    char str2[] = "";
    size_t n = strlen(str1);

    // Użycie wbudowanej funkcji bzero do wyzerowania
    bzero(str1, n);

    // Użycie funkcji ft_bzero do wyzerowania
    ft_bzero(str2, n);

    // Porównanie wyników
    if (memcmp(str1, str2, n) == 0) {
        printf("Test passed! Strings are equal after zeroing.\n");
    } else {
        printf("Test failed! Strings are not equal after zeroing.\n");
    }

    return 0;
}*/
