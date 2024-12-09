/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:12:54 by hle-hena          #+#    #+#             */
/*   Updated: 2024/12/11 12:07:43 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_point	*global_point(void)
{
	static t_point	global = (t_point){0, 0};

	return (&global);
}

int	mlx_close(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->matrix.len)
	{
		free(data->matrix.matrix[i]);
	}
	free(data->matrix.matrix);
	mlx_destroy_window(data->mlx, data->win);
	mlx_destroy_display(data->mlx);
	free(data->mlx);
	exit(0);
}

int	key_hook(int keycode, t_data *data)
{
	if (keycode == 65307)
		mlx_close(data);
	return (0);
}

int	move_hook(int x, int y, t_data *data)
{
	static t_point	last = {0, 0};

	draw_line(data, *global_point(), last, 0x00000000);
	draw_line(data, *global_point(), (t_point){x, y}, 0x00FFFFFF);
	last.x = x;
	last.y = y;
	return (1);
}

int	create_point(int button, int x, int y, t_data *data)
{
	if (button == 1)
	{
		mlx_pixel_put(data->mlx, data->win, x, y, 0x00FFFFFF);
		global_point()->x = x;
		global_point()->y = y;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_data	data;

	if (ac != 2)
		return (0);
	init_data(&data, av[1]);
	mlx_hook(data.win, 2, 1L << 0, key_hook, &data);
	mlx_hook(data.win, 4, 1L << 2, create_point, &data);
	mlx_hook(data.win, 6, 1L << 6, move_hook, &data);
	mlx_hook(data.win, 17, 0, mlx_close, &data);
	mlx_loop(data.mlx);
}
