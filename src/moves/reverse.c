/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:31:55 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 11:02:18 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

void		rra(t_stack *s)
{
	int		swap;
	int		i;

	i = 0;
	while (i < s->topa)
	{
		swap = s->arr[i];
		s->arr[i] = s->arr[i + 1];
		s->arr[i + 1] = swap;
		i++;
	}
}

void		rrb(t_stack *s)
{
	int		swap;
	int		i;

	i = s->capacity - 1;
	while (i > s->topb)
	{
		swap = s->arr[i];
		s->arr[i] = s->arr[i - 1];
		s->arr[i - 1] = swap;
		i--;
	}
}

void		rrr(t_stack *s)
{
	rra(s);
	rrb(s);
}
