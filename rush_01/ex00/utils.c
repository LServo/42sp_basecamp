/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:15:51 by lservo            #+#    #+#             */
/*   Updated: 2022/02/13 23:49:18 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_string(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int has_zero(int table_core[4][4])
{
    int count1;
    int count2;

    count1 = 0;
    count2 = 1;
    while (count1 < 4)
    {
        if (count2 < 4)
        {
            if (table_core[count1][count2] == 0)
                return (1);
            count2++;
        }
        else
        {
            count1++;
            count2 = 0;
        }
    }
    return (0);
}

void create_table(char *args, char table[4][4])
{
    int count1;
    int count2;
    int count3;

    count1 = 0;
    count2 = 0;
    count3 = 0;
    while (args[count1] != '\0')
    {
        while (count2 != 4)
        {
            while (count3 != 4)
            {
                table[count2][count3] = args[count1];
                count3++;
                count1 = count1 + 2;
            }
            count2++;
            count3 = 0;
        }
        count1++;
    }
}

void create_table_core(int table_core[4][4])
{
    int count1;
    int count2;

    count1 = 0;
    count2 = 0;
    while (count1 < 4)
    {
        if (count2 < 4)
        {
            table_core[count1][count2] = 0;
            count2++;
        }
        else
        {
            count1++;
            count2 = 0;
        }
    }
}
