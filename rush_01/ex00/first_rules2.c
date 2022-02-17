/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_rules2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:06:08 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/13 22:58:52 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rowright_four(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 52)
        {
            table_core[i][3] = 1;
            table_core[i][2] = 2;
            table_core[i][1] = 3;
            table_core[i][0] = 4;
        }
        i++;
    }
}

/* A terceira regra que vamos verificar se existe linhas ou colunas com
observadores 3 e 2, pois a casa central da linha/coluna mais perto do dois
é um número 4.*/

void row_threeandtwo(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 50 && table[2][i] == 51)
        {
            table_core[i][2] = 4;
        }
        i++;
    }
    i = 0;
    while (i != 4)
    {
        if (table[2][i] == 50 && table[3][i] == 51)
        {
            table_core[i][1] = 4;
        }
        i++;
    }
}

void col_threeandtwo(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 50 && table[1][i] == 51)
        {
            table_core[1][i] = 4;
        }
        i++;
    }
    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 51 && table[1][i] == 50)
        {
            table_core[2][i] = 4;
        }
        i++;
    }
}

/* Agora vamos verificar se exite linhas/colunas com observadores 2 e 1,
pois a casa mais perto do dois será um 3*/

void row_twoandone(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 50 && table[2][i] == 49)
        {
            table_core[i][3] = 3;
        }
        i++;
    }
    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 49 && table[2][i] == 50)
        {
            table_core[i][0] = 3;
        }
        i++;
    }
}

void col_twoandone(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 50 && table[1][i] == 49)
        {
            table_core[0][i] = 3;
        }
        i++;
    }
    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 49 && table[1][i] == 50)
        {
            table_core[3][i] = 3;
        }
        i++;
    }
}
