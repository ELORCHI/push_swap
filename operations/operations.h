/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:50:00 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/24 07:32:50 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

#include "../stack/stack.h"

void swap(t_stack **stack, int id);
void rotate(t_stack **stack, int id);
void rotation(t_stack **a, t_stack **b, int id);
void rrotate(t_stack **stack, int id);
void rev_rotation(t_stack **a, t_stack **b, int id);
void push_a_b(t_stack **a, t_stack **b, int id);

#endif
