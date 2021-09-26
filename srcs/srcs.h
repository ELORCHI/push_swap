/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:13:07 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/26 10:33:52 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include "libft/libft.h"
# include "../stack/stack.h"
# include "../operations/operations.h"

void	sort_strings(char **table, int tab_len);
void	index_and_fill(t_stack **stack, char **tab, int argc);
int		contain_duplicates(char **str, int len);
int		max(t_stack *a);
int		check_params_errors(int argc, char **str);
#endif
