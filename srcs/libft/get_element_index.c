/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_element_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 08:30:54 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 11:38:16 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_element_index(int *tab, int str, int argc)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (tab[i] == str)
			return (i);
		i++;
	}
	return (-1);
}
