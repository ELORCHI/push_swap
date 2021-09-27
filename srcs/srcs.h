/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:13:07 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/27 11:31:47 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include "libft/libft.h"
# include "../stack/stack.h"
# include "../operations/operations.h"
# include <stdio.h>

void	sort(int *table, int tab_len);
void	index_and_fill(t_stack **stack, char **tab, int argc);
int		contain_duplicates(int *tab, int len);
int		max(t_stack *a);
int		check_params_errors(int argc, char **str);
void	push_swap(t_stack **a, int size);
#endif
