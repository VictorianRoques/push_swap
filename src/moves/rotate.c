/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:51:33 by viroques          #+#    #+#             */
/*   Updated: 2021/05/07 22:01:11 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <moves.h>

void		ra(t_stack *s)
{
	int		swap;
	int		i;

	i = s->topa;
	while (i > 0)
	{
		swap = s->arr[i - 1];
		s->arr[i - 1] = s->arr[i];
		s->arr[i] = swap;
		i--;
	}
}

void		rb(t_stack *s)
{
	int		swap;
	int		i;

	i = s->topb;
	while (i < s->capacity - 1)
	{
		swap = s->arr[i + 1];
		s->arr[i + 1] = s->arr[i];
		s->arr[i] = swap;
		i++;
	}
}

void		rr(t_stack *s)
{
	ra(s);
	rb(s);
}
