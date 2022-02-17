/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_rules.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:19:38 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/13 22:59:00 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Agora como ja foi colocado os alguns números 4 e 3 na função
vamos verificar se é possível descobrir uma linha/coluna através
deles*/

// Primeiramente vamos verificar as linhs/colunas com observadores 1 e 3

void rowleft_oneandthree(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 51 && table[2][i] == 49)
        {
            if (table_core[i][0] == 4 && table_core[i][1] == 3)
            {
                table_core[i][2] = 1;
                table_core[i][3] = 2;
            }
        }
        i++;
    }
}

void rowright_oneandthree(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 49 && table[2][i] == 51)
        {
            if (table_core[i][3] == 4 && table_core[i][2] == 3)
            {
                table_core[i][1] = 1;
                table_core[i][0] = 2;
            }
        }
        i++;
    }
}

void colup_oneandthree(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 49 && table[1][i] == 51)
        {
            if (table_core[0][i] == 4 && table_core[1][i] == 3)
            {
                table_core[2][i] = 1;
                table_core[3][i] = 2;
            }
        }
        i++;
    }
}

void coldown_oneandthree(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 51 && table[1][i] == 49)
        {
            if (table_core[3][i] == 4 && table_core[2][i] == 3)
            {
                table_core[1][i] = 1;
                table_core[0][i] = 2;
            }
        }
        i++;
    }
}

// Agora vamos verificar as linhas/colunas com os observadores 2 e 3.

void rowleft_twoandthree(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 51 && table[2][i] == 50)
        {
            if (table_core[i][0] == 3 && table_core[i][1] == 4)
            {
                table_core[i][2] = 2;
                table_core[i][3] = 1;
            }
        }
        i++;
    }
}
