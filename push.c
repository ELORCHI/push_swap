/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 06:05:25 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/12 06:15:46 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void push(t_stack **stack, int data)
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new == NULL)
		exit(EXIT_FAILURE);
	new->data = data;
	new->next = *stack;
	*stack = new;	
}
