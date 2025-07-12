/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:11:26 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:11:28 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	size_col(int fd_y)
{
	char	*c;
	int		y;

	while (1)
	{
		c = get_next_line(fd_y);
		if (fd_y < 0)
			ft_printf("Error\nThe file is empty or not exist.\n");
		if (!c)
			break ;
		y = ft_strlen(c) - 1;
		free(c);
	}
	return (y);
}

int	size_row(int fd_x)
{
	char	*c;
	int		x;

	x = 0;
	while (1)
	{
		c = get_next_line(fd_x);
		if (!c)
			break ;
		x++;
		free(c);
	}
	if (x == 0)
	{
		ft_printf("Error\nThe file is empty or not exist.\n");
		exit(0);
	}
	return (x);
}
