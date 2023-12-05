/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:54:34 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 11:27:24 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		(del)(lst -> content);
		free(lst);
		lst = NULL;
	}
}
/*
void deleteContent(void *content) {
    free(content);
}
int main(void)
{
    t_list *head = ft_lstnew(strdup("Node 1"));
    printf("Content before deletion: %s\n", (char *)head->content);
    ft_lstdelone(head, deleteContent);
    if (head != NULL) 
	{
        printf("Content after deletion: %s\n", (char *)head->content);
    } 
	else 
	{
        printf("Node has been deleted.\n");
    }
    return (0);
}
*/
