/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:17:05 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 11:28:08 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int			index_of_sort_arr(int *tab, int value, int len)
{
	int		i;

	i = 0;
	while (i < len && tab[i] != value)
		i++;
	return (i);
}

int			*copy_tab(t_stack *s)
{
	int		*tab;
	int		i;

	i = 0;
	if (!(tab = malloc(sizeof(int) * s->capacity)))
		malloc_error(s);
	while (i < s->capacity)
	{
		tab[i] = s->arr[i];
		i++;
	}
	return (tab);
}

void		buble_tab(t_stack *s, int *tab)
{
	int		i;
	int		j;
	int		swap;

	j = 0;
	i = 0;
	while (i < s->capacity - 1)
	{
		j = 0;
		while (j < s->capacity - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}

int			convert_input(t_stack *s)
{
	int		*tab;
	int		i;
	int		tmp;

	tab = copy_tab(s);
	buble_tab(s, tab);
	i = 0;
	while (i < s->capacity)
	{
		tmp = s->arr[i];
		s->arr[i] = index_of_sort_arr(tab, tmp, s->capacity);
		i++;
	}
	free(tab);
	return (0);
}
