/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:19:03 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 11:01:28 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

int			error(char *msg)
{
	ft_putstr_fd("\e[0;31mError\e[0m", 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(msg, 2);
	ft_putstr_fd("\n", 2);
	return (0);
}

void		print_lst(t_stack *s)
{
	int		i;

	i = s->topa;
	printf("STACK A\n");
	while (i > -1)
	{
		printf("%i\n", s->arr[i]);
		i--;
	}
	printf("STACK B\n");
	i = s->topb;
	while (i < s->capacity)
	{
		printf("%i\n", s->arr[i]);
		i++;
	}
}

void		malloc_error(t_stack *s)
{
	(void)s;
	ft_putstr_fd("Malloc Error\n", 2);
	exit(0);
}
