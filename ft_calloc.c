/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlamb <romlamb@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:24:34 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/04 09:36:37 by romlamb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*retravailler la fonction avec les nouvelles bzero etc*/
#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t size)
{
	size_t	size_tot;
	void	*ptr;

	if (elementCount == 0 || size == 0)
		return (NULL);
	size_tot = size * elementCount;
	if (elementCount != size_tot / size)
		return (NULL);
	ptr = malloc(size_tot);
	if (ptr)
		ft_memset(ptr, 0, size_tot);
	return (ptr);
}
