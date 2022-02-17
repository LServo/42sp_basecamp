/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startswith2_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:22:57 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/13 22:59:35 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void twocoldown_endfourthree(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[1][i] == 50)
        {
            if (table_core[0][i] == 3 && table_core[1][i] == 4)
            {
                table_core[3][i] = 2;
                table_core[2][i] = 1;
            }
        }
        i++;
    }
}

void tworowleft_endfourthree(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[2][i] == 50)
        {
            if (table_core[i][3] == 3 && table_core[i][2] == 4)
            {
                table_core[i][0] = 2;
                table_core[i][1] = 1;
            }
        }
        i++;
    }
}

void tworowright_endfourthree(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 50)
        {
            if (table_core[i][0] == 3 && table_core[i][1] == 4)
            {
                table_core[i][3] = 2;
                table_core[i][2] = 1;
            }
        }
        i++;
    }
}

void twocolup_onesecondlastfour(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 50)
        {
            if (table_core[3][i] == 4 && table_core[1][i] == 1)
            {
                table_core[0][i] = 3;
                table_core[2][i] = 2;
            }
        }
        i++;
    }
}

void twocoldown_onesecondlastfour(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[1][i] == 50)
        {
            if (table_core[0][i] == 4 && table_core[2][i] == 1)
            {
                table_core[3][i] = 3;
                table_core[1][i] = 2;
            }
        }
        i++;
    }
}
