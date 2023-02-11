/*
** EPITECH PROJECT, 2022
** bs pushwap
** File description:
** reproducing the duck game
*/

#include "../include/my.h"

int list_is_sorted(fct_struct_t *fstruct, int nb_number)
{
    for (int i = 0; i < nb_number - 1; i++) {
        if (fstruct->lista[i] > fstruct->lista[i + 1]) {
            return 0;
        }
    }
    return 1;
}

void str_to_tab(fct_struct_t *fstruct, int ac, char **av)
{
    int lista[ac- 1];
    int listb[ac - 1];

    fstruct->nb_operation = 0;
    fstruct->nb_number = ac - 1;

    for (int i = 0; i < ac - 1; i++) {
        lista[i] = my_getnbr(av[i + 1]);
        listb[i] = 0;   
    }
    fstruct->lista = lista;
    fstruct->listb = listb;
}

void put_b(fct_struct_t *fstruct, int nb, int pos_remove)
{
    int temp[nb - 1];

    for (int i = 0; i < nb; i++) {
        if (i < pos_remove) {
            temp[i] = fstruct->lista[i];
        }
        if (i > pos_remove) {
            temp[i - 1] = fstruct->lista[i];
        }
    }
    fstruct->lista = temp;
    fstruct->nb_operation++;
    if (fstruct->nb_operation > 1)
        my_putstr(" pb");
    else
        my_putstr("pb");
}