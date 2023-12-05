/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:06:46 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/08 15:16:51 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*haystack = "Palabra";
	const char	*needle = "a";
	size_t		len = 7;

	printf("%s\n", ft_strnstr(haystack,needle,len));
	return (0);
}
*/
