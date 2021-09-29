/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:12:33 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/27 09:17:42 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	sort(int *table, int tab_len)
{
	int		key;
	int		index;
	int		j;

	index = 1;
	while (index < tab_len)
	{
		j = index - 1;
		key = table[index];
		while (j >= 0 && (table[j] > key))
		{
			table[j + 1] = table[j];
			j--;
		}
		table[j + 1] = key;
		index++;
	}
}
