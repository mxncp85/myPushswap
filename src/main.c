/*
** EPITECH PROJECT, 2022
** bs pushwap
** File description:
** reproducing the duck game
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    fct_struct_t fstruct;
    
    if (ac == 1) {
        my_putchar('\n');
        return (84);
    }
    if (ac == 3 && av[2] > av[3]) {
        my_putstr("sa\n");
        return (0);
    }
    str_to_tab(&fstruct, ac, av);
    loop(&fstruct, ac - 1);
    my_putchar('\n');
    return 0;
}

void loop(fct_struct_t *fstruct, int nb)
{
    fstruct->pos_to_move = 0;
    fstruct->prev_smallest_number = -2147483647 - 1;
    fstruct->smallest_number = -2147483647 - 1;

    for (int i = 0; i < nb; i++) {
        sorting_fct(fstruct, nb);
    }
    for (int i = 0; i < nb; i++) {
        my_putstr(" pa");
    }

}

void sorting_fct(fct_struct_t *fstruct, int nb)
{
    int need_to_move = 0;
    fstruct->smallest_number = fstruct->lista[0];
    fstruct->pos_to_move = 0;
    for (int i = 0; i < fstruct->nb_number ;i++) {
        if (fstruct->smallest_number > fstruct->lista[i]) {
            fstruct->smallest_number = fstruct->lista[i];
            fstruct->pos_to_move = i;
            need_to_move = 1;
        }
    }
    for (int i = 0; i < fstruct->pos_to_move; i++) {
        ra_elem(fstruct, nb);
    }
    put_b(fstruct, fstruct->nb_number, fstruct->pos_to_move);
    fstruct->nb_number--;
    fstruct->prev_smallest_number = fstruct->smallest_number;
}
