/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:36:31 by matbarre          #+#    #+#             */
/*   Updated: 2023/10/30 15:42:24 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	countsign;
	int	num;

	countsign = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			countsign *= -1;
		i++;
		if (str[i] == '+' || str[i] == '-')
			return (0);
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (countsign * num);
}
/*
int	main (void)
{
	const char	*str = "-71232415123241566";
	printf("%d\n",ft_atoi(str));
	printf("%d\n",atoi(str));
	return (0);
}
*/
