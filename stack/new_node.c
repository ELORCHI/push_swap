/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 07:48:31 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/12 07:53:01 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack *new_node(int data)
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->data = data;
	new->next = NULL;
	return (new);
}
