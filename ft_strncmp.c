/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:54:12 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/18 09:12:46 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	if (size == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < size - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*#include <stdio.h>

int main()
{
	char s1[] = "abcdefgh";
	char s2[] = "abcdwxyz";
	printf("%d", ft_strncmp(s1, s2, 4));
	return 0;
}*/
