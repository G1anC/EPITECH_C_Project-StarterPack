/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** description
*/

#include "../INCLUDE/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int diff = 0;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            diff += s1[i] - s2[i];
    }
    return diff;
}
