/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <romlambe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:47:38 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/06 14:52:04 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	len;

	if (!*s2)
		return ((char *)s1);
	len = ft_strlen(s2);
	while (*s1 && len <= size)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, len) == 0)
			return ((char *)s1);
		++s1;
		--size;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <stdio.h>
int    main(void)
{
    char *empty = (char*)"";
    char s[] = "";
	printf("%s\n", strstr(empty, ""));
    printf("%s\n", ft_strnstr(empty, "",-1));
    return (0);
}*/
