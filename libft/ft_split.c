/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrabows <fgrabows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:58:26 by fgrabows          #+#    #+#             */
/*   Updated: 2024/07/18 12:35:03 by fgrabows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_alloc_free(char **new, size_t t, size_t j)
{
	new[t] = malloc(sizeof(char) * (j + 1));
	if (!new[t])
	{
		while (t)
		{
			free(new[--t]);
		}
		free(new);
	}
}

static void	ft_small_string(char **new, char *old, char c, size_t i)
{
	size_t	j;
	size_t	t;

	j = 0;
	t = 0;
	while (t < i)
	{
		j = 0;
		while (*old == (char)c && *old)
			old++;
		while (*old && *old != (char)c)
		{
			j++;
			old++;
		}
		ft_alloc_free(new, t, j);
		if (!new[t])
			return ;
		t++;
	}
}

static void	ft_set_string(char **new, char *old, char c, size_t place)
{
	size_t	j;
	size_t	t;

	j = 0;
	t = 0;
	while (t < place && *old)
	{
		while (*old == (char)c && *old)
			old++;
		while (*old && *old != c)
		{
			new[t][j] = *old;
			j++;
			old++;
		}
		new[t][j] = '\0';
		t++;
		j = 0;
	}
}

static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (*(s + i) == (char)c && *(s + i))
		i++;
	while (*(s + i++))
	{
		if (*(s + i) == (char)c || !*(s + i))
		{
			while (*(s + i) == (char)c && *(s + i))
				i++;
			counter++;
		}
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**str;

	if (!s)
		return (NULL);
	if (*s && c == '\0')
		i = 1;
	else if (c == '\0')
		i = 0;
	else
		i = ft_wordcounter(s, c);
	str = malloc(sizeof(char *) * (i + 1));
	if (!str)
		return (NULL);
	ft_small_string(str, (char *)s, c, i);
	if (!str)
		return (NULL);
	ft_set_string(str, (char *)s, c, i);
	str[i] = (char *) '\0';
	return (str);
}

/*int main()
{
	char **str;
	char tab[10] = "trippolete";
	int c = 0;
	str = ft_split(tab, c);
	int i = 0;
	if (str[1] == NULL)
		printf("JOŁ");
	else
		printf("NOTJOŁ");
	while(str[i])
	{
		printf("%s", str[i]);
		i++;
	}
}*/
