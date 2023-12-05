/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:40:40 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/02 13:54:01 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d\n",ft_isalpha('A'));
	printf("%d\n",ft_isalpha('a'));
	printf("%d\n",ft_isalpha('0'));
	return (0);
}
*/
