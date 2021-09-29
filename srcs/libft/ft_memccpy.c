/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 02:10:26 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 11:48:28 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				index;
	unsigned char		*ptr;
	unsigned const char	*s;

	index = -1;
	ptr = (unsigned char *)dest;
	s = (unsigned const char *)src;
	while (++index < n)
	{
		ptr[index] = s[index];
		if (s[index] == (unsigned char)c)
			return (dest + index + 1);
	}
	return (0);
}
