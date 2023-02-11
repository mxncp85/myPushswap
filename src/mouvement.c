/*
** EPITECH PROJECT, 2022
** bs pushwap
** File description:
** reproducing the duck game
*/

#include "../include/my.h"


void ra_elem(fct_struct_t *fstruct, int nb_number)
{
    int save = fstruct->lista[0];

    for (int i = 0;  i < nb_number - 1; i++) {
        fstruct->lista[i] = fstruct->lista[i + 1];
    }
    fstruct->lista[nb_number - 1] = save;
    fstruct->nb_operation++;
    if (fstruct->nb_operation > 1)
        my_putstr(" ra");
    else
        my_putstr("ra");
}

void rb_elem(fct_struct_t *fstruct, int nb_number)
{
    int save = fstruct->listb[0];

    for (int i = 0;  i < nb_number - 1; i++) {
        fstruct->listb[i] = fstruct->listb[i + 1];
    }
    fstruct->listb[nb_number - 1] = save;
    fstruct->nb_operation++;
    if (fstruct->nb_operation > 1)
        my_putstr(" rb");
    else
        my_putstr("rb");
}

void sa_elem(fct_struct_t *fstruct)
{
    int saved_char = fstruct->lista[0];

    fstruct->lista[0] = fstruct->lista[1];
    fstruct->lista[1] = saved_char;
    fstruct->nb_operation++;
    if (fstruct->nb_operation > 1)
        my_putstr(" sa");
    else
        my_putstr("sa");
}

void sb_elem(fct_struct_t *fstruct)
{
    int saved_char = fstruct->listb[0];

    fstruct->listb[0] = fstruct->listb[1];
    fstruct->listb[1] = saved_char;
    fstruct->nb_operation++;
    if (fstruct->nb_operation > 1)
        my_putstr(" sb");
    else
        my_putstr("sb");
}
