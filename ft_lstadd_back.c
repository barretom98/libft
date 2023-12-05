/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:30:04 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 11:22:06 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
	else
		*lst = new;
}
/*
int main(void) 
{
    t_list *head = ft_lstnew("Node 3");
    ft_lstadd_back(&head, ft_lstnew("Node 2"));
    ft_lstadd_back(&head, ft_lstnew("Node 1"));
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

    return 0;
}
*/
