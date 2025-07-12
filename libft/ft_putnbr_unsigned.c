/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:04:06 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:04:08 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_number_length(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_itoa_unsigned(unsigned int num)
{
	char	*string;
	int		len;

	len = ft_number_length(num);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (0);
	string[len] = '\0';
	while (num != 0)
	{
		string[len - 1] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (string);
}

int	ft_putnbr_unsigned(unsigned int num)
{
	char	*n;
	int		len;

	len = 0;
	if (num == 0)
		len += write(1, "0", 1);
	else
	{
		n = ft_itoa_unsigned(num);
		len += ft_putstr(n);
		free(n);
	}
	return (len);
}
