/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:22:39 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/02 15:25:50 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	c1;

	c1 = c;
	len = ft_strlen((char *)s);
	while (s[len] != c1 && len != 0)
	{
		len--;
	}
	if (s[len] == c1)
		return ((char *)s + len);
	return (NULL);
}
/*
int	main (void)
{
	const char *s = "HOHLA";
	int			c = 'H';

	printf("%s\n", ft_strrchr(s,c));
	return (0);
}
*/
