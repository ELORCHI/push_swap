#include <stdio.h>
#include "libft.h"

int ft_isint(char *str)
{
		int i;
		int num;
		char *str_num;

		i = 0;
		while (str[i])
		{
				if (ft_isdigit((int)str[i]) == 0)
					return (-1);
				i++;
		}
		num = ft_atoi(str);
		str_num = ft_itoa(num);
		if (ft_strcmp(str, str_num) != 0)
		{
				free(str_num);
				return (-1);
		}
		free(str_num);
		return (0);
}
