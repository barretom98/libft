/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:37:01 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/08 15:16:31 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;
	size_t	slen;

	i = 0;
	if (s == NULL)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (len > slen - start)
		len = slen - start;
	if (start >= slen)
		return (ft_strdup(""));
	subs = (char *)malloc (sizeof(char) * (len + 1));
	if (subs == NULL)
		return (NULL);
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
/*
int	main (void)
{
	char const	*s = "Holaaa";
	int			start = 3;
	size_t		len = 6;

	printf("%s\n",ft_substr(s,start,len));
	return (0);
}
*/
