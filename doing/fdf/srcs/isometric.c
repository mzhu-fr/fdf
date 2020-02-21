/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isometric.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <mzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:30:28 by mzhu              #+#    #+#             */
/*   Updated: 2020/02/21 19:34:05 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

void		isometric(t_point *a, t_point *b, t_point *c)
{
	t_point		p;
	t_point		d;
	t_point		t;

	p = *a;
	d = *b;
	t = *c;
	a->x = (p.x- p.y) * cos(0.523599);
	a->y = (p.x + p.y) * sin(0.523599) - a->z;
	b->x = (d.x - d.y) * cos(0.523599);
	b->y = (d.x + d.y) * sin(0.523599) - b->z;
	c->x = (t.x - t.y) * cos(0.523599);
	c->y = (t.x + t.y) * sin(0.523599) - c->z;
}