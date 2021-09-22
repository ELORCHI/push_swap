/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 07:20:53 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/12 07:22:10 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		help;
	long	longn;

	longn = (long)n;
	if (longn < 0)
	{
		ft_putchar_fd('-', fd);
		longn = -1 * longn;
	}
	if (longn <= 9)
		ft_putchar_fd(longn + 48, fd);
	else
	{
		help = longn % 10;
		ft_putnbr_fd(longn / 10, fd);
		ft_putchar_fd(help + 48, fd);
	}
}
