/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:40:35 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 11:46:54 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{	
	void	*aloc_mem;

	aloc_mem = malloc(sizeof(char) * size * count);
	if (aloc_mem == NULL)
		return (aloc_mem);
	ft_bzero(aloc_mem, (size * count));
	return (aloc_mem);
}
