/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlamb <romlamb@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:15:17 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/03 16:45:27 by romlamb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *big, int c)
{
	while (*big)
	{
		if (*big == c)
			return ((char *)big);
		big++;
	}
	return (NULL);
}

/*#include <stdio.h>

int main()
{
	char *str = "salut tout le monde";
	char caractere = 'l';
	printf("%s", ft_strchr(str, caractere));
	return 0;
}*/
