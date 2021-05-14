/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:34:52 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 13:59:26 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

int			init(char **argv, t_stack *s)
{
	int		i;

	if ((i = check_error(argv)) == -1)
		return (1);
	if ((init_stack(s, i)) == -1)
		return (1);
	while (i > 0)
	{
		push_a(s, ft_atoi(argv[i]));
		i--;
	}
	return (0);
}
