/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:49:56 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 10:19:38 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((char *)b + i) = c;
		i++;
	}
	return (b);
}
/*
int	main (void)
{
	char	b[] = "HOLA";
	int		c = 7;
	size_t	len = 4;

	printf("%s\n", b);
	printf("%s\n",ft_memset(b, c, len));
	return (0);
}
*/
