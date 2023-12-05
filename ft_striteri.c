/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matbarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:52:40 by matbarre          #+#    #+#             */
/*   Updated: 2023/11/10 14:19:54 by matbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void print_char_and_index(unsigned int index, char *character) {
    printf("Index: %u, Character: %c\n", index, *character);
}

int main() {
    char str[] = "Hola";

    printf("Original String: %s\n", str);
	ft_striteri(str, print_char_and_index);
    return (0);
}
*/
