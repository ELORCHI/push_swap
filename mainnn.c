/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 10:50:14 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/30 13:12:07 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int ft_strlen(char *str)
{
	int i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (0);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("ERROR ARGUMENTS");
		return (1);
	}
	FILE *file = fopen(argv[1], "r");
	if (file == NULL)
	{
		ft_putstr("ERROR : file");
		return (1);
	}
	t_gr gr;
	if (fscanf(file, "%d %d %c \n", &(gr.width), &(gr.height), &(gr.char_gr)) < 3)
	{
		ft_putstr("ERROR FILE");
		return (1);
	}
	if (gr.height > 300 || gr.width > 300)
	{
		ft_putstr("ERROR");
		return (1);
	}
	gr.back = (char **)malloc(sizeof(char *) * (gr.height + 1));
	int i = 0;
	int j = 0;
	while (j < gr.height)
	{
		gr.back[j] = (char *)malloc(sizeof(char) * gr.width + 1);
		j++;
	}
	gr.back[j] = NULL;
	j = 0;
	while (j < gr.height)
	{
		i = 0;
		while (i < gr.width)
		{
			gr.back[j][i] = gr.char_gr;
			i++;
		}
		gr.back[j][i] = '\0';
		j++;
	}
	i = 0;
	j = 0;

	t_rec rec;
	int error;
	while ((error = fscanf(file, "%c %f %f %f %f %c", &rec.empty, &rec.x, &rec.y, &rec.width, &rec.height, &rec.rec_c)) == 6)
	{
		while (j < gr.height)
		{
			i = 0;
			while (i < gr.width)
			{
				if (((float)i <= (rec.x + rec.width)) && ((float)i >= rec.x) && ((float)j >= rec.y) && ((float)j <= rec.y + rec.height))
					gr.back[j][i] = rec.rec_c;
				i++;
			}
			j++;
		}
	}
	j = 0;
	while (j < gr.height)
	{
		i = 0;
		while (i < gr.width)
		{
			printf("%c", gr.back[j][i]);
			i++;
		}
		printf("\n");
		j++;
	}

}















