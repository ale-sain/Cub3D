/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:34:22 by mmourdal          #+#    #+#             */
/*   Updated: 2023/04/04 19:56:25 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <fcntl.h>
# include "../libft/libft.h"
# include "../mlx/mlx/mlx.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <limits.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

# define GREEN "\033[0;32m"
# define BLUE "\033[1;34m"
# define RED "\033[0;31m"
# define END "\033[0m"

# define W_WIDTH	1280
# define W_HEIGHT	720

# define ARG_ERROR -1
# define FILE_ERROR -2
# define MAP_ERROR -3
# define MALLOC_ERROR -4
# define MLX_ERROR -5
# define ENV_ERROR -6
# define PARSING_SUCCESS 1
# define PARSING_FAILURE 0
# define SUCCESS 1
# define FAILURE 0

# define ESC 65307
# define W 119
# define A 97
# define D 100
# define S 115

typedef struct s_info_map
{
	char	*no_texture;
	char	*so_texture;
	char	*we_texture;
	char	*ea_texture;
	char	*s_texture;
	char	**map;
	int		type_error;
	int		floor_color[3];
	int		ceiling_color[3];
}	t_info_map;

typedef struct s_start_game
{
	void		*mlx;
	void		*win;
	void		*img;
	int			width;
	int			height;
	t_info_map	*info_map;
}	t_start_game;

/**************** IN DIRECTORY PARSE *****************/
				/** IN FILE READ_MAP.C **/
int		get_info_map(const char *map_name, t_info_map *info_parse);
				/** IN FILE UTILS.C **/
void	ft_print_error(const int type_error);
#endif