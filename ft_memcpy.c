/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:19:05 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 10:19:24 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		*((char *) dst + i) = *((const char *) src + i);
		i++;
	}
	return (dst);
}
/*
int	main (void)
{
	char		dst[] = "HOLA";
	const char	src[] = "CHAU";
	size_t	n = 4;

	printf("%s\n", dst);
	printf("%s\n", ft_memcpy(dst, src, n));
	return (0);
}
*/
