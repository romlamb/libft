/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:32:56 by romlamb           #+#    #+#             */
/*   Updated: 2023/10/18 09:07:47 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	ft_memset(ptr, 0, n);
}
/*#include <stdio.h>
int main()
{
	char chaine[10];
	ft_bzero(chaine, 5);
	printf("%s", chaine);
	return 0;
}*/
