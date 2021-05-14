/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:06:05 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 11:06:24 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

int			is_sort(t_stack *s)
{
	int		i;

	i = 0;
	if (s->topb != s->capacity)
		return (0);
	if (s->topa == 0)
		return (1);
	while (i < s->topa)
	{
		if (s->arr[i] < s->arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}
