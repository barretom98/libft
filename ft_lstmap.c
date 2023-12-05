/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:25:44 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 11:03:51 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*tmp;
	t_list	*res_f;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		res_f = f(lst->content);
		tmp = ft_lstnew(res_f);
		if (!tmp)
		{
			ft_lstclear(&result, del);
			del(res_f);
			return (NULL);
		}
		ft_lstadd_back(&result, tmp);
		lst = lst->next;
	}
	return (result);
}
/*
void	*f(void *content)
{
	int	*value = (int *)content;
	int	*result = malloc(sizeof(int));
	if (result)
		*result = (*value) * 2;
	return (result);
}

int	main (void)
{
	t_list	*lst = ft_lstnew(malloc(sizeof(int)));
	lst->content = malloc (sizeof(int));
	*((int *)lst->content) = 2;
	ft_lstadd_back(&lst,ft_lstnew(malloc(sizeof(int))));
	lst->next->content = malloc(sizeof(int));
	*((int *)lst->next->content) = 2;
	t_list	*result = ft_lstmap(lst, f, free);
	while (result)
	{
		printf("%d ", *((int *)result->content));
		result = result->next;
	}
	ft_lstclear(&lst, free);
	ft_lstclear(&result, free);
	return (0);
}
*/
