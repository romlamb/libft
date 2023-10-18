/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:11:08 by romlambe          #+#    #+#             */
/*   Updated: 2023/10/18 09:10:59 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>

int main(void)
{
    t_list *head = NULL;

    int *value1 = malloc(sizeof(int));
    *value1 = 42;
    t_list *element1 = ft_lstnew(value1);
    ft_lstadd_front(&head, element1);

    int *value2 = malloc(sizeof(int));
    *value2 = 7;
    t_list *element2 = ft_lstnew(value2);
    ft_lstadd_front(&head, element2);

    t_list *last_element = ft_lstlast(head);
    printf("Contenu du dernier élément : %d\n", *(int *)last_element->content);

    free(value1);
    free(element1);
    free(value2);
    free(element2);

    return (0);
}*/
