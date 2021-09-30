/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 10:54:40 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/30 12:56:01 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_gr
{
	int width;
	int height;
	char char_gr;
	char **back;
}			t_gr;

typedef struct s_rec
{
	float x;
	float y;
	float width;
	float height;
	char rec_c;
	char empty;
}			t_rec;
#endif 
