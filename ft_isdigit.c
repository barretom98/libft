/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:56:05 by matbarre          #+#    #+#             */
/*   Updated: 2023/10/26 12:17:01 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n",ft_isdigit('0'));
	printf("%d\n",ft_isdigit('9'));
	printf("%d\n",ft_isdigit(' '));
	return(0);
}
*/
