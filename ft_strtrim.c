/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:01:27 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/18 09:13:38 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		len;

	j = 0;
	len = ft_strlen(s1);
	i = len + 1;
	while (ft_strchr(set, s1[--i - 1]))
		len--;
	i = -1;
	while (ft_strchr(set, s1[++i]))
		len--;
	if (len < 0)
		len = 0;
	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	while (j < len)
		res[j++] = s1[i++];
	res[j] = 0;
	return (res);
}
/*#include <stdio.h>
int main()
{
	char	s1[] = "abacoucouabc";
	char	set[] = "abc";

	printf("%s", ft_strtrim(s1, set));
	return (0);
}*/
