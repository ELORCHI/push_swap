/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 06:20:53 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/12 07:55:33 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "operations.h"

int main()
{
	t_stack *stack;

	stack = NULL;
	push(&stack, 4);
	push(&stack, -4);
	push(&stack, 445454);
	// add_back(&stack, new_node(55));
	display_stack(stack);
	// pop_back(&stack);
	swap(&stack, STACK_A);
	ft_putstr("\n======\n");
	display_stack(stack);
}
