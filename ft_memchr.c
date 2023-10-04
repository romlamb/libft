/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlamb <romlamb@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:59:13 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/04 09:37:57 by romlamb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*memoryBlock, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*(char *)memoryBlock == c)
			return ((char *)memoryBlock);
		memoryBlock++;
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Bonjour le monde";
    char caractere = 'l';
    size_t taille = ft_strlen(str);
    void *resultat = memchr(str, caractere, taille);
    if (resultat != NULL)
        printf("%s\n",(char *)resultat);
    return 0;
}*/
