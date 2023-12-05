/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:48:36 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 11:11:08 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		new -> next = *lst;
		*lst = new;
	}
}
/*
int main()
{
    t_list *head = ft_lstnew("Node 3");
    ft_lstadd_front(&head, ft_lstnew("Node 2"));
    ft_lstadd_front(&head, ft_lstnew("Node 1"));
    t_list *current = head;
    while (current != NULL) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    while (head != NULL) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return (0);
}
*/
