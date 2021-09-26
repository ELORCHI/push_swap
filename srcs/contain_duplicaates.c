/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contain_duplicaates.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:15:02 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/26 10:35:46 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int contain_duplicates(char **str, int len)
{
	int i;

	i = 0;
	while (i < len - 1)
	{
		if (ft_strcmp(str[i], str[i + 1]) == 0)
			return (0);
		i++;
	}
	return (-1);
}
