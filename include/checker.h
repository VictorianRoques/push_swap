/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:31:43 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 13:54:43 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <stdlib.h>
# include <stdio.h>
# include <moves.h>

int			init(char **argv, t_stack *s);
int			error(char *msg);
void		print_lst(t_stack *s);
void		malloc_error(t_stack *s);
int			check_error(char **argv);
int			is_sort(t_stack *s);

#endif
