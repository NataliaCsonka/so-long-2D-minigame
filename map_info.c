/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:11:20 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 16:28:33 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	texturs(t_game *game)
{
	int	width;
	int	hight;

	width = WIDTH;
	hight = HIGHT;
	game->img.wall = mlx_xpm_file_to_image(game->mlx,
			WALL, &width, &hight);
	game->img.player = mlx_xpm_file_to_image(game->mlx,
			PLAYER, &width, &hight);
	game->img.floor = mlx_xpm_file_to_image(game->mlx,
			FLOOR, &width, &hight);
	game->img.exit = mlx_xpm_file_to_image(game->mlx,
			EXIT, &width, &hight);
	game->img.collectible = mlx_xpm_file_to_image(game->mlx,
			COLLECTABLE, &width, &hight);
	game->img.on_exit = mlx_xpm_file_to_image(game->mlx,
			ON_EXIT, &width, &hight);
	game->img.fin_exit = mlx_xpm_file_to_image(game->mlx,
			FIN_EXIT, &width, &hight);
}

void	put_map(int x, int y, char c, t_game *game)
{
	static int	width = WIDTH;
	static int	hight = HIGHT;

	if (c == '1')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.wall, x * width, y * hight);
	if (c == '0')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.floor, x * width, y * hight);
	if (c == 'P')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.player, x * width, y * hight);
	if (c == 'E')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.exit, x * width, y * hight);
	if (c == 'C')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.collectible, x * width, y * hight);
	if (c == 'O')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.on_exit, x * width, y * hight);
	if (c == 'F')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.fin_exit, x * width, y * hight);
}

int	render_img(t_game *game)
{
	int	y;
	int	x;

	y = 0;
	while (y < game->row)
	{
		x = 0;
		while (x < game->col)
		{
			put_map(x, y, game->map[y][x], game);
			x++;
		}
		y++;
	}
	return (0);
}

int	collectible_on_map(t_game *game)
{
	int	x;
	int	y;
	int	c;

	x = 0;
	y = 0;
	c = 0;
	while (x < game->row)
	{
		while (y < game->col)
		{
			if (game->map[x][y] == 'C')
			{
				c++;
			}
			y++;
		}
		y = 0;
		x++;
	}
	return (c);
}
