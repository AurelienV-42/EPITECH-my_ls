/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my.h"

void lmaj_options(char *filepath)
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

void rmaj_options(char *filepath)
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

void r_options(char *filepath)
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

void t_options(char *filepath)
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
