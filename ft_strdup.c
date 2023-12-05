/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:30:33 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/08 14:13:38 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*copy;

	i = ft_strlen(s1);
	j = 0;
	copy = (char *) malloc(sizeof(char) * i + 1);
	if (copy == NULL)
		return (NULL);
	while (j < i)
	{
		copy[j] = s1[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
/*
int	main(void)
{
	const char	*s1 = "HOLA";
	printf("%s\n", ft_strdup(s1));
	return (0);
}
*/
