/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:54:04 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 11:03:19 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int			search_min_a(t_stack *s)
{
	int		i;
	int		min;

	i = 0;
	min = s->arr[i];
	while (i <= s->topa)
	{
		if (s->arr[i] < min)
			min = s->arr[i];
		i++;
	}
	return (min);
}

void		top_or_down_a(t_stack *s, int min)
{
	int		i;

	i = 0;
	while (s->arr[i] != min)
		i++;
	if (i < s->topa / 2)
	{
		while (s->arr[s->topa] != min)
			print_rra(s);
	}
	else
	{
		while (s->arr[s->topa] != min)
			print_ra(s);
	}
}

void		buble_min_a(t_stack *s)
{
	int		min;

	while (s->topa > 1)
	{
		min = search_min_a(s);
		if (s->arr[s->topa] == min)
			print_pb(s);
		else if (s->arr[s->topa - 1] == min)
		{
			print_sa(s);
			print_pb(s);
		}
		else
		{
			top_or_down_a(s, min);
			print_pb(s);
		}
	}
	if (s->arr[s->topa] > s->arr[0])
		print_sa(s);
}

void		push_full_b(t_stack *s)
{
	while (s->topb != s->capacity)
		print_pa(s);
}

void		buble_min(t_stack *s)
{
	buble_min_a(s);
	push_full_b(s);
}
