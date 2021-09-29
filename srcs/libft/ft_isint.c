/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 10:30:18 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 14:13:31 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isint(char *str)
{
	int		i;
	int		num;
	char	*str_num;
	int		t;

	i = 0;
	t = 0;
	if (str[0] == '-' || str[0] == '+')
		i = 1;
	while (str[i])
	{
		if (ft_isdigit((int)str[i]) == 0)
			return (-1);
		i++;
	}
	num = ft_atoi(str);
	str_num = ft_itoa(num);
	if (str[0] == '+' || (str[0] == '-' && str[1] == '0'))
		t = 1;
	if (ft_strcmp(str + t, str_num) != 0)
		t = -1;
	else
		t = 0;
	free(str_num);
	return (t);
}
