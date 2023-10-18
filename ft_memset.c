/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:09:19 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/18 09:11:46 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t count)
{
	size_t			i;
	unsigned char	*byte_ptr;
	unsigned char	byte_c;

	i = 0;
	byte_ptr = (unsigned char *)ptr;
	byte_c = (unsigned char )c;
	while (i < count)
	{
		byte_ptr[i] = byte_c;
		i++;
	}
	return (ptr);
}
/*#include <stdio.h>
int main()
{
	char chaine[10];
	ft_memset(chaine, 'l', sizeof(chaine));
	printf("%s", chaine);
	return 0;
}*/
