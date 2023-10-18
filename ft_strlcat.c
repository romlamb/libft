/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:01:23 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/18 09:12:31 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	i = 0;
	if (size == 0 || (size <= lend))
		return (lens + size);
	while (src[i] && i < (size - lend - 1))
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i++] = 0;
	return (lend + lens);
}
/*#include <stdio.h>
int main()
{
	char *s1 = "coucou";
	char s2[20] = "salut";
	printf("%ld", ft_strlcat(s2,s1, 10));
	return 0;
}*/
