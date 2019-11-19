/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include <stdio.h>
#include "my.h"

void my_ls(char *filepath)
{
	DIR *dir = opendir(filepath);
	struct dirent *folder = NULL;

	while ((folder = readdir(dir)) != NULL) {
		if (folder->d_name[0] != '.') {
			my_putstr(folder->d_name);
			my_putchar('\n');
		}
	}
	closedir(dir);
}

void switch_to_print(char *filepath, struct_t structure)
{
	if (structure.L == 1)
		lmaj_options(filepath);
	if (structure.d == 1) {
		if (filepath[0] == '\0')
			my_putstr(".");
		my_putstr(filepath);
	}
	if (structure.R == 1)
		rmaj_options(filepath);
	if (structure.r == 1)
		r_options(filepath);
	if (structure.t == 1)
		t_options(filepath);
}

struct_t switch_to_stock(char **av, int i, int nb)
{
	struct_t structure;

	switch (av[i][nb]) {
	case 'L':
		structure.L = 1;
		break;
	case 'd':
		structure.d = 1;
		break;
	case 'r':
		structure.r = 1;
		break;
	case 't':
		structure.t = 1;
		break;
	default:
		break;
	}
	return (structure);
}

void stock_options_path(int ac, char **av)
{
	int i = 1;
	int nb = 1;
	int nb_files = 0;
	int nb_malloc = ac;
	char *filepath = malloc(sizeof(char) * my_strlen(av[nb_malloc]) + 1);
	struct_t return_struct;

	while (i != ac) {
		if (av[i][0] == '-') {
			while (av[i][nb] != '\0') {
				return_struct = switch_to_stock(av, i, nb);
				nb++;
			}
		} else {
			filepath = my_strdup(av[i]);
			nb_files++;
		}
		i++;
	}
	switch_to_print(filepath, return_struct);
	free(filepath);
}
