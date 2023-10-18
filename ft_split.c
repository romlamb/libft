/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:39:31 by romlambe          #+#    #+#             */
/*   Updated: 2023/10/18 09:12:08 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verif_char(char c, char charset)
{
	if (c == charset || c == 0)
		return (1);
	return (0);
}

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (verif_char(s[i + 1], c) && !(verif_char(s[i], c) || i == 0))
			words++;
		i++;
	}
	return (words);
}

static void	write_words(char const *s, char *dest, char c)
{
	size_t	i;

	i = 0;
	while (!verif_char(s[i], c))
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
}

static void	write_string(char **array, char *s, char c)
{
	size_t	i;
	size_t	j;
	int		string;

	i = 0;
	string = 0;
	while (s[i])
	{
		if (verif_char(s[i], c))
			i++;
		else
		{
			j = 0;
			while (!verif_char(s[i], c))
			{
				j++;
				i++;
			}
			array[string] = (char *)malloc(sizeof(char) * (j + 1));
			write_words(s + i - j, array[string], c);
			string++;
		}
	}
	array[string] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	write_string(array, (char *)s, c);
	return (array);
}
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    char const *chaine = "Bonjour,comment,les amis,la famille,les collegues?";
    char c = ',';
	int	i;

	i = 0;
    char **resultat = ft_split(chaine, c);
    if (resultat)
	{
        while (resultat[i] != NULL)
		{
            printf("%s\n", resultat[i]);
            free(resultat[i]);
			i++;
        }
        free(resultat);
    }

    return 0;
}*/
