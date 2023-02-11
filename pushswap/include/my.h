/*
** EPITECH PROJECT, 2022
** my hunter maxence perronie
** File description:
** my header
*/
#include <stdlib.h>
#include <stdio.h>

#ifndef MY_H_
    #define MY_H_
    typedef struct fct_struct {
        int *lista;
        int *listb;
        int nb_operation;
        int nb_number;
        int pos_to_move;
        int prev_smallest_number;
        int smallest_number;
    }fct_struct_t;

    int my_compute_power_rec(int, int);
    int my_compute_square_root(int);
    int my_find_prime_sup(int);
    int my_is_prime_it(int);
    int my_is_prime(int);
    int my_isneg(int);
    int my_put_nbr(int);
    void display(long, char);
    int my_pow(int, int);
    void my_putchar(char);
    int my_putstr(char const *);
    char *my_revstr(char*);
    char rev_char(char, char);
    int my_showmem(char const *, int);
    int my_showstr(char const *);
    void my_sort_int_array(int *, int);
    int my_str_isalpha(char const *);
    int my_str_islower(char const *);
    int my_str_isnum(char const *);
    int my_str_isprintable(char const *);
    int my_str_isupper(char const *);
    char *my_strcapitalize(char *);
    char *my_strcat(char * , char const *);
    int my_strcmp(char const *, char const *);
    char *my_strcpy(char *, char const *);
    int my_strlen(char const *);
    char *my_strlowcase(char *);
    char *my_strncat(char *, char const *, int);
    int my_strncmp(char const   *, char const *, int);
    char *my_strncpy(char *, char const *, int);
    char *my_strstr(char *, char const *);
    char *my_strupcase(char *);
    void my_swap(int *,int *);
    char *my_strdup(char const *);
    int my_show_word_array(char * const *tab);
    int my_put_float(double nbr , int precision);
    int my_putnbr_base_long(long nbr, char *base, int precision);
    int my_getnbr(char *input);

    void loop(fct_struct_t *fstruct, int nb);
    void sa_elem(fct_struct_t *fstruct);
    void sb_elem(fct_struct_t *fstruct);
    int list_is_sorted(fct_struct_t *fstruct, int nb_number);
    void ra_elem(fct_struct_t *fstruct, int nb_number);
    void rb_elem(fct_struct_t *fstruct, int nb_number);
#endif /* !MY_H_ */
