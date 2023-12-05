/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:07:02 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/02 13:54:43 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isascii(145));
	printf("%d\n", ft_isascii('0'));
	printf("%d\n", ft_isascii('A'));
	return (0);
}
*/
