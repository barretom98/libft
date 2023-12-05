/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:04:50 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 11:13:34 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
/*
int main() 
{
    t_list *head = ft_lstnew("Node 1");
    ft_lstadd_front(&head, ft_lstnew("Node 2"));
    ft_lstadd_front(&head, ft_lstnew("Node 3"));
    int size = ft_lstsize(head);
    printf("Size of the linked list: %d\n", size);
    while (head != NULL) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
*/
