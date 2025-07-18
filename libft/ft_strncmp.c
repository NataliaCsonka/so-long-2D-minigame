/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:06:25 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:06:27 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*new_s1;
	const unsigned char	*new_s2;
	unsigned int		i;

	new_s1 = (const unsigned char *)s1;
	new_s2 = (const unsigned char *)s2;
	i = 0;
	while ((new_s1[i] || new_s2[i]) && i < n)
	{
		if (new_s1[i] != new_s2[i])
			return (new_s1[i] - new_s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{   
	printf("%d\n", ft_strncmp("hello", "hello", 5));
}
*/
