/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <romlambe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:06:22 by romlambe          #+#    #+#             */
/*   Updated: 2023/10/11 17:05:03 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//trouver une maniere de verifier que del ou f soit pas vide meme si ca passe
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!del ||!f)
		return (NULL);
	temp = 0;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!(new->content))
		{
			ft_lstclear(&temp, (*del));
			return (0);
		}
		ft_lstadd_back(&temp, new);
		lst = lst->next;
	}
	return (temp);
}
