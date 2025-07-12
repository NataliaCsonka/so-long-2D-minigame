/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:03:00 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:03:03 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (n > 0)
	{
		ptr[n - 1] = c;
		n--;
	}
	return (b);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned char s[10] = "1234567";
    ft_memset(s,'1',4);

    printf("%s", s);
}
*/
