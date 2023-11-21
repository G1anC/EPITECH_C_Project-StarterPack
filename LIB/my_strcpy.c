/*
** EPITECH PROJECT, 2022
** my_strcpy
** File description:
** description
*/

#include "../INCLUDE/my.h"

extern char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i++] != '\0')
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
