/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 05:58:38 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/12 07:51:27 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUCK_H
# define STUCK_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_stack
{
	int				data;
	struct s_stack	*next;
}				t_stack;


void 	push(t_stack **stack, int data);
void 	display_stack(t_stack *stack);
void 	ft_putstr(char *str);
void 	ft_putnbr_fd(int n, int fd);
void 	pop(t_stack **stack);
void 	add_back(t_stack **stack, t_stack *new);
void 	pop_back(t_stack **stack);
t_stack	*new_node(int data);
#endif
