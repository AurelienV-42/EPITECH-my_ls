/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my.h"

int main(int ac, char **av)
{
	if (ac == 1) {
		my_ls(".");
		return (0);
	}
	stock_options_path(ac, av);
	return (0);
}
