/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:13:07 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/01 16:23:09 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include "libft/libft.h"
# include "../stack/stack.h"
# include "../operations/operations.h"
# include <stdio.h>

int		is_sorted(t_stack *stack);
int		max_data(t_stack *a);
int		node_position(t_stack *stack, t_stack *node);
int		contain_duplicates(int *tab, int len);
int		max(t_stack *a);
int		check_params_errors(int argc, char **str);
void	push_swap(t_stack **a, int size);
void	sort_three(t_stack **a);
void	sort_four(t_stack **a, t_stack **b);
void	mini_sort(t_stack **a, int argc);
void	sort_five(t_stack **a, t_stack **b);
void	sort(int *table, int tab_len);
void	index_and_fill(t_stack **stack, char **tab, int argc);
t_stack	*min(t_stack *stack);
#endif
