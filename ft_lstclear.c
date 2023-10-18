/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:14:42 by romlambe          #+#    #+#             */
/*   Updated: 2023/10/18 09:10:36 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;
	t_list	*j;

	if (!lst || !*lst || !del)
		return ;
	i = *lst;
	while (i)
	{
		j = i->next;
		ft_lstdelone(i, del);
		i = j;
	}
	*lst = 0;
}
