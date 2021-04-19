/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** bsq.h
*/

#ifndef BSQ_H_
#define BSQ_H_

#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

#define SUP_NUM_LINE array_info->supposed_num_lines
#define NUM_LINES array_info->number_of_lines
#define SIZE_LINE array_info->size_line
#define ARRAY array_info->array

#define RES_X array_info->result_info.x
#define RES_Y array_info->result_info.y
#define RES_VALUE array_info->result_info.value


typedef struct s_result {
    int value;
    int x;
    int y;
} t_result;

typedef struct s_array_info {
    int **array;
    int number_of_lines;
    int supposed_num_lines;
    int size_line;
    t_result result_info;
} t_array_info;

/*---------main_fonctions-------------*/

int bsq(char *filepath);
int error(char *filepath);
int get_supposed_number_lines(char *buffer);
int nbr_lines(char *buffer, int size_of_read);
int file_size(char *file_path);
char *check_num_lines(char *buffer, int supposed_num, int num_of_lines);
int **buff_to_array(char *buffer, int number_of_line, int size_line);
int size_of_line(char *buffer);
t_array_info *get_array(char *file_path);
int *copy_line(char *buffer, int size_line);
t_array_info *get_value_map(t_array_info *array_info);

/*------------lib_fonctions-----------*/

int my_put_nbr(int nb);
void my_putchar(char c);
void my_putstr(char const *str);
char *my_strdup(char const *src);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int print_array(char **array);
int print_int_array(t_array_info *array_info);
void free_array(char **array);
int smallest(int num_one, int num_two, int num_three);

#endif