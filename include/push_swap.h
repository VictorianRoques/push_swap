/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:32:23 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 13:54:35 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <checker.h>

void		print_pa(t_stack *s);
void		print_pb(t_stack *s);
void		print_rra(t_stack *s);
void		print_rrb(t_stack *s);
void		print_rrr(t_stack *s);
void		print_ra(t_stack *s);
void		print_rb(t_stack *s);
void		print_rr(t_stack *s);
void		print_sa(t_stack *s);
void		print_sb(t_stack *s);
void		print_ss(t_stack *s);
void		buble_max_b(t_stack *s);
void		buble_min(t_stack *s);
int			search_min_a(t_stack *s);
void		sort_len_3(t_stack *s);
void		push_full_b(t_stack *s);
void		top_or_down_b(t_stack *s, int max);
int			convert_input(t_stack *s);

#endif
