/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_block_infos.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 11:43:04 by ldutriez          #+#    #+#             */
/*   Updated: 2020/01/30 11:46:33 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_BLOCK_INFOS_H
# define CUB3D_BLOCK_INFOS_H

typedef struct	s_block_data
{
	int			column;
	int			num;
	int			i;
	t_texture	act;
	t_ray		info;
	float		x;
	float		y;
	t_vector2	pos;
	t_color		color;
}				t_block_data;

#endif
