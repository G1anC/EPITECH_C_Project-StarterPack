/*
** EPITECH PROJECT, 2023
** exxit.c
** File description:
** exxit
*/

#include "../INCLUDE/my.h"

void exitError(char *errMess)
{
    my_putstr(2, errMess);
    register int rdi asm("rdi") = 84;
    register int rax asm("rax") = 60;
    asm("syscall");
}