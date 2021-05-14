/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:25:43 by viroques          #+#    #+#             */
/*   Updated: 2021/05/07 19:00:15 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <moves.h>

void		sa(t_stack *s)
{
	int		swap;

	if (s->topa < 1)
		return ;
	swap = s->arr[s->topa];
	s->arr[s->topa] = s->arr[s->topa - 1];
	s->arr[s->topa - 1] = swap;
}

void		sb(t_stack *s)
{
	int		swap;

	if (s->topb >= s->capacity - 1)
		return ;
	swap = s->arr[s->topb];
	s->arr[s->topb] = s->arr[s->topb + 1];
	s->arr[s->topb + 1] = swap;
}

void		ss(t_stack *s)
{
	sa(s);
	sb(s);
}
