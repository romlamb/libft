/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:29:39 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/18 09:12:25 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const*s1, char const *s2)
{
	char	*res;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 && !s2)
		return (0);
	res = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!res)
		return (0);
	ft_strlcpy(res, s1, len1 + 1);
	ft_strlcat(res, s2, len1 + len2 + 1);
	return (res);
}
/*#include <stdio.h>
int main()
{
	char *s1 = "coucou";
	char *s2 = "salut";
	printf("%s\n", ft_strjoin(s1,s2));
	return 0;

}*/
