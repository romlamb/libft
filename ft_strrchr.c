/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <romlambe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:37:29 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/06 14:22:57 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen((char *)str);
	if ((char)c == 0)
		return ((char *)str + len);
	while (len && str[len] != (char) c)
		len--;
	if (str[len] == (char)c)
		return ((char *)str + len);
	return (0);
}

/*#include <stdio.h>

int main()
{
	char *str = "tripouille";
	char caractere = 'o';
	printf("%d\n" ,printf("%s\n", ft_strrchr(str, 't' + 256)));
	printf("%d\n" ,printf("%s\n", strrchr(str, 't' + 256)));	return 0;
}*/
