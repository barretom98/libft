/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:38:25 by matbarre          #+#    #+#             */
/*   Updated: 2023/10/31 17:46:00 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)&s[i] = 0;
		i++;
	}
}
/*
int	main (void)
{
	char	s[4] = "Hola";
	size_t	n = 4;

	printf("%s\n", s);
	ft_bzero(s, n);
	printf("%s\n", s);
	return (0);

}
*/
