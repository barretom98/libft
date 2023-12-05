/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:04:05 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/14 10:22:15 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (src >= dst)
		ft_memcpy(dst, src, len);
	else
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*((unsigned char *) dst + i) = *((unsigned const char *) src + i);
			i--;
		}
	}
	return (dst);
}
/*
int	main (void)
{
	char		dst[] = "HOLA";
	const char	src[] = "CHAU";
	size_t		len = 4;

	printf("%s\n", dst);
	printf("%s\n", ft_memmove(dst, src, len));
	return (0);
}
*/
