/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:09:51 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 10:30:03 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *) str + i);
		i++;
	}
	return (NULL);
}
/*
int	main (void)
{
	const char	s[] = "hola";
	int			c = 'o';
	size_t		n = 2;


	printf("%s\n", s);
	printf("%s\n", ft_memchr(s, c, n));
	return (0);
}
*/
