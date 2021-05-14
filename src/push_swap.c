/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:10:18 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 15:10:43 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void		quick_sort(t_stack *s)
{
	int		pivot;
	int		count;

	count = 0;
	pivot = s->capacity / 10;
	while (pivot < s->capacity)
	{
		count = 0;
		while (count < s->capacity / 10)
		{
			if (s->arr[s->topa] < pivot
				&& s->arr[s->topa] >= pivot - s->capacity / 10)
			{
				print_pb(s);
				count++;
			}
			else
				print_ra(s);
		}
		pivot += s->capacity / 10;
	}
	while (s->topa > -1)
		print_pb(s);
	buble_max_b(s);
}

int			main(int ac, char **argv)
{
	t_stack s;

	if (ac < 2)
		return (0);
	if (init(argv, &s) || is_sort(&s))
		return (0);
	if (s.capacity <= 3)
		sort_len_3(&s);
	else if (s.capacity <= 50)
		buble_min(&s);
	else
	{
		convert_input(&s);
		quick_sort(&s);
	}
	free(s.arr);
}
