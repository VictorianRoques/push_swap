/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:50:08 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 11:02:10 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <moves.h>

void		pa(t_stack *s)
{
	int		value;

	if (s->topb == s->capacity)
		return ;
	value = s->arr[s->topb];
	pop_b(s);
	push_a(s, value);
}

void		pb(t_stack *s)
{
	int		value;

	if (s->topa == -1)
		return ;
	value = s->arr[s->topa];
	pop_a(s);
	push_b(s, value);
}
