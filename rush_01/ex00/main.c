/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:13:25 by lservo            #+#    #+#             */
/*   Updated: 2022/02/14 03:34:22 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void print_char(char c);
void print_string(char *str);
void print_resolve(int table_core[4][4]);
void create_table(char *args, char table[4][4]);
void scan_manager(char table[4][4], int table_core[4][4]);
void rules(char table[4][4], int table_core[4][4]);
void startswith2(char table[4][4], int table_core[4][4]);
void startswith3(char table[4][4], int table_core[4][4]);
int validate_table(char table[4][4]);
int has_zero(int table_core[4][4]);
void create_table_core(int table_core[4][4]);
void sweep_table2(int table_core[4][4]);
void sweep_table(int table_core[4][4]);

int main(int argc, char **argv)
{
    char table[4][4];
    int table_core[4][4];

    if (argc != 2)
    {
        print_string("error1\n");
        return (0);
    }
    create_table(argv[1], table);
    create_table_core(table_core);
    if (validate_table(table) == 1)
    {
        print_string("error2\n");
        return (0);
    }
    scan_manager(table, table_core);
    print_resolve(table_core);
    printf("Número de Argumentos: %d\n", argc);
    return (0);
}

void print_resolve(int table_core[4][4])
{
    int row;
    int col;
    int tmp;

    row = 0;
    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            tmp = table_core[row][col] + 48;
            write(1, &tmp, 1);
            if (col != 3)
                print_string(" ");
            col++;
        }
        print_string("\n");
        row++;
    }
}

void scan_manager(char table[4][4], int table_core[4][4])
{
    int count1;

    count1 = 0;
    while (5 > count1++)
    {
        rules(table, table_core);
        startswith2(table, table_core);
        startswith3(table, table_core);
        sweep_table2(table_core);
        sweep_table2(table_core);
        if (has_zero(table_core) == 0)
            break;
    }
}

int validate_table(char table[4][4])
{
    int count1;
    int count2;
    int num1;
    int num2;

    count1 = 0;
    while (count1 < 3)
    {
        count2 = 0;
        while (count2 < 4)
        {
            num1 = table[count1][count2] - 48;
            num2 = table[count1 + 1][count2] - 48;
            if (num1 + num2 > 5 || num1 + num2 < 3)
                return (1);
            else if (num1 != 2 && num1 == num2)
                return (1);
            count2++;
        }
        count1 = count1 + 2;
    }
    return (0);
}
