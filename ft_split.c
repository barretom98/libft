/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:36:24 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/13 12:31:20 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_mallocsize(char const *s, char c)
{
	char	*aux;
	char	**aux2;
	int		i;

	i = 0;
	aux = (char *)s;
	while (*aux)
	{
		while (*aux == c)
			aux++;
		if (*aux != '\0')
			i++;
		while (*aux != c && *aux)
			aux++;
	}
	aux2 = (char **) malloc ((i + 1) * (sizeof(char *)));
	if (aux2 == NULL)
		return (NULL);
	aux2[i] = NULL;
	return (aux2);
}

char	**ft_copy(char const *s, char c)
{
	size_t	len;
	char	**tab;
	int		j;

	j = 0;
	len = 0;
	tab = ft_mallocsize(s, c);
	if (tab == NULL)
		return (tab);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			while (s[len] != c && s[len])
				len++;
			tab[j++] = ft_substr(s, 0, len);
			s += len;
		}
		len = 0;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = ft_copy(s, c);
	return (tab);
}
/*
int	main (void)
{
	const char	*s = "Hola Como, estas";
	char		c = ',';
	char	*split;

	split = *ft_split(s, c);
	printf("%s\n", split);
	return (0);
}
*/
