/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlamb <romlamb@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:09:19 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/04 15:58:41 by romlamb          ###   ########.fr       */
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
