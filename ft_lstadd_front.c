/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:32:04 by romlambe          #+#    #+#             */
/*   Updated: 2023/10/18 09:10:32 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    t_list *head = NULL;

    int *value1 = malloc(sizeof(int));
    *value1 = 42;
    t_list *element1 = ft_lstnew(value1);

    int *value2 = malloc(sizeof(int));
    *value2 = 7;
    t_list *element2 = ft_lstnew(value2);

    // Ajoute element1 en tête de la liste
    ft_lstadd_front(&head, element1);

    // Ajoute element2 en tête de la liste
    ft_lstadd_front(&head, element2);

    // Affiche les contenus de la liste
    t_list *current = head;
    while (current != NULL)
    {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }

    // Libération de la mémoire
    free(value1);
    free(element1);
    free(value2);
    free(element2);

    return (0);
}*/
