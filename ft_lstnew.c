/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:29:17 by romlambe          #+#    #+#             */
/*   Updated: 2023/10/18 09:11:09 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (0);
	lst->content = content;
	lst->next = 0;
	return (lst);
}

/*#include <stdio.h>

int main(void)
{
    int *value = malloc(sizeof(int));
    *value = 42;
    t_list *element = ft_lstnew(value);

    if (element == NULL)
    {
        printf("La mémoire n'a pas pu être allouée.\n");
        return (1);
    }

    printf("Contenu de l'élément de la liste : %d\n", *(int *)element->content);

    free(value);
    free(element);
    return (0);
}*/
