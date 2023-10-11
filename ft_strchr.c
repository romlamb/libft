/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <romlambe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:15:17 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/06 14:13:42 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *big, int c)
{
	while (*big && *big != (char)c)
	{
		big++;
	}
	if (*big == (char)c)
		return ((char *)big);
	else
		return (NULL);
}

/*#include <stdio.h>

int main()
{
	char *str = "tripouille";
	printf("%d\n", printf("%s\n", ft_strchr(str, 't' + 256)));
	printf("%d\n", printf("%s\n", strchr(str, 't' + 256)));
	return 0;
}*/
