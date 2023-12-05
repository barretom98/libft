/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:14:10 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 11:19:24 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
/*
int main(void) 
{
    t_list *head = ft_lstnew("Node 1");
    ft_lstadd_front(&head, ft_lstnew("Node 2"));
    ft_lstadd_front(&head, ft_lstnew("Node 3"));
    t_list *last = ft_lstlast(head);
    if (last != NULL) {
        printf("Last element in the linked list: %s\n", (char *)last->content);
    } else {
        printf("The linked list is empty.\n");
    }
    while (head != NULL) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return (0);
}
*/
