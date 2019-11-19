/*
** EPITECH PROJECT, 2017
** Aurélien Vandaele
** File description:
** Library : my_strlen
*/

#include "my.h"

void my_putstr(char const *str)
{
	int i = 0;

	while (str[i])
	{
		my_putchar(str[i]);
		i++;
	}
}
