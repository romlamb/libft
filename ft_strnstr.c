/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlamb <romlamb@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:47:38 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/04 09:45:06 by romlamb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	len;

	if (s2 == 0)
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
    char str[6] = "salut";
    char s[6] = "lu";
    printf("%s\n", ft_strnstr(str, s, 4));
    return (0);
}*/
