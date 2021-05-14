/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:24:28 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 15:12:40 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

int		is_function(char *line, char *call)
{
	int		i;

	i = 0;
	while (line[i] && call[i] && line[i] == call[i])
		i++;
	if (line[i] == '\0')
		return (1);
	return (0);
}

int		call_sort_function_2(char *line, t_stack *s)
{
	if (is_function(line, "rra"))
		rra(s);
	else if (is_function(line, "rrb"))
		rrb(s);
	else if (is_function(line, "rrr"))
		rrr(s);
	else
	{
		error("Instruction doesn't exist and/or incorrectly formatted");
		return (-1);
	}
	return (0);
}

int		call_sort_function(char *line, t_stack *s)
{
	if (is_function(line, "ra"))
		ra(s);
	else if (is_function(line, "rb"))
		rb(s);
	else if (is_function(line, "rr"))
		rr(s);
	else if (is_function(line, "sa"))
		sa(s);
	else if (is_function(line, "sb"))
		sb(s);
	else if (is_function(line, "ss"))
		ss(s);
	else if (is_function(line, "pa"))
		pa(s);
	else if (is_function(line, "pb"))
		pb(s);
	else
	{
		if ((call_sort_function_2(line, s)) == -1)
			return (-1);
	}
	return (0);
}

int		read_input(t_stack *s)
{
	char		*line;
	int			ret;

	while ((ret = get_next_line(0, &line)))
	{
		if (call_sort_function(line, s))
		{
			free(line);
			return (0);
		}
		free(line);
		line = NULL;
	}
	free(line);
	line = NULL;
	return (0);
}

int		main(int ac, char **argv)
{
	t_stack		s;

	if (ac < 2 || init(argv, &s))
		return (0);
	if (is_sort(&s))
	{
		printf("OK\n");
		free(s.arr);
		return (0);
	}
	read_input(&s);
	if (is_sort(&s))
		printf("OK\n");
	else
		printf("KO\n");
	free(s.arr);
	return (0);
}
