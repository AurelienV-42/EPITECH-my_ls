/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** Library
*/

#include <dirent.h>
#include <stdlib.h>

#ifndef MY_H_
#define MY_H_

typedef struct {
	int L;
	int R;
	int d;
	int r;
	int t;

} struct_t;

void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
void my_ls(char *filepath);
void stock_options_path(int ac, char **av);
void d_options(char *filepath);
void lmaj_options(char *filepath);
void rmaj_options(char *filepath);
void r_options(char *filepath);
void t_options(char *filepath);
int my_putnbr(int nb);

#endif
