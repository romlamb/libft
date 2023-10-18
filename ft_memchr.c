/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:59:13 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/18 09:11:19 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*memoryBlock, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*(unsigned char *)memoryBlock == (unsigned char)c)
			return ((unsigned char *)memoryBlock);
		memoryBlock++;
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "tripouille";
    void *resultat = memchr(str, 2 + 256, 3);
	printf("%s\n",(char *)resultat);
    return 0;
}*/
