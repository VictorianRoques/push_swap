/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble_max.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:56:24 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 11:35:46 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void		top_or_down_b(t_stack *s, int max)
{
	int		i;

	i = s->capacity - 1;
	while (s->arr[i] != max)
		i--;
	if (i <= (s->capacity * 2 - (s->capacity - s->topb)) / 2)
	{
		while (s->arr[s->topb] != max)
		{
			if (s->arr[s->topb] == max - 1)
				print_pa(s);
			else
				print_rb(s);
		}
	}
	else
	{
		while (s->arr[s->topb] != max)
			print_rrb(s);
	}
}

int			search_max_b(t_stack *s)
{
	int		i;
	int		max;

	i = s->topb;
	if (s->topb == s->capacity)
		return (-1);
	max = s->arr[s->topb];
	while (i < s->capacity)
	{
		if (s->arr[i] > max)
			max = s->arr[i];
		i++;
	}
	return (max);
}

void		end_buble_max(t_stack *s)
{
	if (s->topb < s->capacity - 1 && s->arr[s->topb] < s->arr[s->topb + 1])
	{
		print_sb(s);
		print_pa(s);
	}
	else
		print_pa(s);
	print_pa(s);
}

void		buble_max_b(t_stack *s)
{
	int		max;

	while (s->topb != s->capacity - 2)
	{
		if ((max = search_max_b(s)) == -1)
			break ;
		if (s->arr[s->topb] == max)
			print_pa(s);
		else if (s->arr[s->topb + 1] == max)
		{
			print_sb(s);
			print_pa(s);
		}
		else
		{
			top_or_down_b(s, max);
			print_pa(s);
			if (s->topa > 0 && s->arr[s->topa] > s->arr[s->topa - 1])
				print_sa(s);
		}
	}
	end_buble_max(s);
}
