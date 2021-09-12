/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 06:20:53 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/12 07:27:27 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int main()
{
	t_stack *stack;

	stack = NULL;
	push(&stack, 4);
	push(&stack, -4);
	push(&stack, 445454);
	display_stack(stack);
	pop(&stack);
	ft_putstr("======\n");
	display_stack(stack);
}
