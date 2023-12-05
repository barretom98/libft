/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:59:51 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/02 13:54:36 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalnum('4'));
	printf("%d\n", ft_isalnum('&'));
	printf("%d\n", ft_isalnum('A'));
	return(0);
}
*/
