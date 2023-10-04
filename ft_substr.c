/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlamb <romlamb@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:22:30 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/04 15:57:48 by romlamb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	llen;
	char	*res;

	i = 0;
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	llen = ft_strlen(s + start);
	if (len < llen)
		llen = len;
	res = (char *)malloc(sizeof(len - start) + 1);
	if (!res)
		return (0);
	while (i < llen)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
/*#include <stdio.h>
int main()
{
	char *str = "0123456789";
	printf("%s\n", ft_substr(str, 4, 3));
	return 0;
}*/
