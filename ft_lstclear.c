/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:46:57 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 11:38:07 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	*lst = NULL;
}
/*
void deleteContent(void *content) {
    free(content);
}

int main() 
{
    t_list *head = ft_lstnew(strdup("Node 1"));
    head->next = ft_lstnew(strdup("Node 2"));
    head->next->next = ft_lstnew(strdup("Node 3"));
    t_list *current = head;
    printf("Contents before deletion:\n");
    while (current != NULL) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    ft_lstclear(&head, deleteContent);
    printf("Contents after deletion:\n");
    while (head != NULL) {
        printf("%s\n", (char *)head->content);
        head = head->next;
    }

    return 0;
}
*/
