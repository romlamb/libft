/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlamb <romlamb@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:00:35 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/04 15:52:55 by romlamb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	const char	*char_src;
	char		*char_dest;
	size_t		i;

	i = 0;
	char_src = (const char *)src;
	char_dest = (char *)dest;
	if (char_src == char_dest)
		return (NULL);
	if (char_src < char_dest)
	{
		while (i < size)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	if (char_src > char_dest)
	{
		i = size ;
		while (i > 0)
		{
			char_dest[i - 1] = char_src[i - 1];
			i--;
		}
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};

    memmove(array + 1, array + 2, 3 * sizeof(int));

    for (int i = 0; i < 5; i++)
	{
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}*/
