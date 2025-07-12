/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:05:17 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:05:20 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*
void print_index_and_char(unsigned int index, char *c)
{
    printf("Index: %u, Character: %c\n", index, *c);
}

int main() {
  char *string = "Hello, world!";
  ft_striteri(string, print_index_and_char);

  return 0;
}
*/
