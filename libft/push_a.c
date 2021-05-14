/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:26:43 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 15:10:50 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		push_a(t_stack *s, int value)
{
	if (s->topa < s->capacity - 1)
	{
		s->topa++;
		s->arr[s->topa] = value;
	}
}