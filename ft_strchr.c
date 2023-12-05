/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:58:40 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/02 15:23:01 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c1;

	c1 = c;
	while (*s != '\0' && *s != c1)
		s++;
	if (*s != c1)
		return (NULL);
	else
		return ((char *)s);
}
/*
int	main(void)
{
	const char *s = "HOLA";
	int			c = 'O';

	printf("%s\n", ft_strchr(s,c));
	return (0);
}
*/
