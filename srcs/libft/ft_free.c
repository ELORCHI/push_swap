/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 07:57:43 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/27 07:58:56 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_free(char **tab)
{
	int i;

	i = 0;
	if (tab == NULL)
		return ;
	while (tab[i] != NULL)
		free(tab[i]);
	free(tab);
}
