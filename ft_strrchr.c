/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlamb <romlamb@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:37:29 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/04 09:45:26 by romlamb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == c)
			last = str;
		str++;
	}
	if (last != NULL)
		return ((char *)last);
	return (NULL);
}

/*#include <stdio.h>

int main()
{
	char *str = "salut tout le monde";
	char caractere = 'o';
	printf("%s", ft_strrchr(str, caractere));
	return 0;
}*/
