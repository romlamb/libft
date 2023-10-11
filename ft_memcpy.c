/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <romlambe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:20:09 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/06 12:05:02 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	const char	*char_src;
	char		*char_dest;
	size_t		i;

	char_src = (const char *)src;
	char_dest = (char *)dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < size)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (char_dest);
}
/*#include <stdio.h>
int main()
{
	char source[] = "Hello, World!";
	char destination[20];
	ft_memcpy(destination, source, sizeof(source));
	printf("Destination: %s\n", destination);
	return 0;
}*/
