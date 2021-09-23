/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 03:56:25 by eel-orch          #+#    #+#             */
/*   Updated: 2019/11/03 23:16:05 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		index;
	int		j;
	char	*ptr;

	index = -1;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	while (++index < (int)ft_strlen(s1))
		ptr[index] = s1[index];
	while (index < (int)(ft_strlen(s1) + ft_strlen(s2)))
		ptr[index++] = s2[j++];
	ptr[index] = '\0';
	return (ptr);
}
