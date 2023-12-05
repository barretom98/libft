/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:19:58 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 11:41:07 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
/*
void printContent(void *content) {
    printf("%s\n", (char *)content);
}

int main() 
{
    t_list *head = ft_lstnew(strdup("Node 1"));
    head->next = ft_lstnew(strdup("Node 2"));
    head->next->next = ft_lstnew(strdup("Node 3"));
    ft_lstiter(head, printContent);
    while (head != NULL) {
        t_list *temp = head;
        head = head->next;
        free(temp->content);
        free(temp);
    }

    return 0;
}
*/
