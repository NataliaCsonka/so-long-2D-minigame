/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:02:41 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:02:43 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;

	tmpdst = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	while (n > 0)
	{
		*tmpdst = *tmpsrc;
		tmpdst++;
		tmpsrc++;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>
int main() {
    char src[] = "Hello, World!";
    char dest[20];

    ft_memcpy(dest, src, 15);
    
    printf("Copy: %s\n", dest);
    
    return 0;
}
*/