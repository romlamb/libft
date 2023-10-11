/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <romlambe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:14:42 by romlambe          #+#    #+#             */
/*   Updated: 2023/10/11 16:20:06 by romlambe         ###   ########.fr       */
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
