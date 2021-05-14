/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:22:10 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 15:05:21 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			init_stack(t_stack *s, int capacity)
{
	if (!(s->arr = malloc(sizeof(int) * capacity)))
		return (-1);
	s->topa = -1;
	s->topb = capacity;
	s->capacity = capacity;
	return (0);
}
