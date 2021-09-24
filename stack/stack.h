/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 05:58:38 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/24 08:48:44 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../srcs/libft/libft.h"

# define STACK_A 0
# define STACK_B 1
# define STACK_A_B 2

typedef struct	s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}				t_stack;


void 	push(t_stack **stack, t_stack *new);
void 	display_stack(t_stack *stack, int id);
void 	ft_putstr(char *str);
void 	ft_putnbr_fd(int n, int fd);
void 	pop(t_stack **stack);
void	push_back(t_stack **stack, t_stack *new);
void 	pop_back(t_stack **stack);
int		stack_len(t_stack *stack);
t_stack *last_node(t_stack *stack);
t_stack *copy_node(t_stack *srcs);
t_stack	*new_node(int data);
#endif
