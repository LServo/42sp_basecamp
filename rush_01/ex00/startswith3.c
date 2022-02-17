/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startswith3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:59:53 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/13 23:01:29 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void colup_threethird(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 51)
        {
            if (table_core[2][i] == 3)
            {
                table_core[3][i] = 4;
                table_core[0][i] = 2;
                table_core[1][i] = 1;
            }
        }
        i++;
    }
}

void coldown_threethird(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[1][i] == 51)
        {
            if (table_core[1][i] == 3)
            {
                table_core[0][i] = 4;
                table_core[3][i] = 2;
                table_core[2][i] = 1;
            }
        }
        i++;
    }
}

void rowleft_threethird(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[2][i] == 51)
        {
            if (table_core[i][2] == 3)
            {
                table_core[i][3] = 4;
                table_core[i][0] = 2;
                table_core[i][1] = 1;
            }
        }
        i++;
    }
}

void rowright_threethird(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 51)
        {
            if (table_core[i][1] == 3)
            {
                table_core[i][0] = 4;
                table_core[i][3] = 2;
                table_core[i][2] = 1;
            }
        }
        i++;
    }
}

void colup_onethird(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 51)
        {
            if (table_core[2][i] == 1)
            {
                table_core[3][i] = 4;
                table_core[0][i] = 2;
                table_core[1][i] = 3;
            }
        }
        i++;
    }
}
