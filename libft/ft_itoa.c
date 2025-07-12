/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:00:41 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:00:43 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_length(int num)
{
	unsigned int	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len += 1;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	unsigned int	len;
	char			*string;

	len = ft_number_length(n);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		string[0] = '0';
	string[len] = '\0';
	while (num != 0)
	{
		string[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (string);
}
/*
int main()
{
    int num = -12345;
    char *str = ft_itoa(num);

    printf("Integer: %d\n", num);
    printf("String: %s\n", str);
    free(str);
    return 0;
}
*/
