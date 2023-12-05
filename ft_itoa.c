/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:38:06 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/10 10:35:20 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digitcounter(int n)
{
	int	counter;

	if (!n)
		return (1);
	counter = 0;
	if (n < 0)
	{
		n = n * (-1);
		counter++;
	}
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char			*string;
	int				i;
	unsigned int	num;

	string = malloc(sizeof(char) * digitcounter(n) + 1);
	if (string == NULL)
		return (NULL);
	num = n;
	i = digitcounter(n) - 1;
	string[i + 1] = '\0';
	if (!n)
		string[0] = '0';
	if (n < 0)
	{
		string[0] = '-';
		num = (unsigned int) n * (-1);
	}
	while (num > 0)
	{
		string[i] = '0' + num % 10;
		num = num / 10;
		i--;
	}
	return (string);
}
/*
int	main (void)
{
	int	n = 42;
	char	*str;

	str = ft_itoa(n);
	printf("%s\n",str);
	return(0);
}
*/
