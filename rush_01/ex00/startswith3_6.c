/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startswith3_6.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:27:13 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/13 23:00:46 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void coldown_firstonelastfour(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[1][i] == 51)
        {
            if (table_core[3][i] == 1 && table_core[0][i] == 4)
            {
                table_core[1][i] = 2;
                table_core[2][i] = 3;
            }
        }
        i++;
    }
}

void rowleft_firstonelastfour(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[2][i] == 51)
        {
            if (table_core[i][0] == 1 && table_core[i][3] == 4)
            {
                table_core[i][2] = 2;
                table_core[i][1] = 3;
            }
        }
        i++;
    }
}

void rowright_firstonelastfour(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 51)
        {
            if (table_core[i][3] == 1 && table_core[i][0] == 4)
            {
                table_core[i][1] = 2;
                table_core[i][2] = 3;
            }
        }
        i++;
    }
}

void colup_firsttwofourthird(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 51)
        {
            if (table_core[0][i] == 2 && table_core[2][i] == 4)
            {
                table_core[3][i] = 1;
                table_core[1][i] = 3;
            }
        }
        i++;
    }
}

void coldown_firsttwofourthird(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[1][i] == 51)
        {
            if (table_core[3][i] == 2 && table_core[1][i] == 4)
            {
                table_core[0][i] = 1;
                table_core[2][i] = 3;
            }
        }
        i++;
    }
}
