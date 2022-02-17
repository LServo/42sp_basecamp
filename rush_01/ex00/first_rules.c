/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 10:45:51 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/13 22:58:42 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Primeiramente vamos verificar se um número 1 foi escrito na função,
caso ele foi dado como parâmetro vamos escrever o número 4 ao lado dele.*/

void col_one(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 49)
        {
            table_core[0][i] = 4;
        }
        i++;
    }
    i = 0;
    while (i != 4)
    {
        if (table[1][i] == 49)
        {
            table_core[3][i] = 4;
        }
        i++;
    }
}

void row_one(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[2][i] == 49)
        {
            table_core[i][0] = 4;
        }
        i++;
    }
    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 49)
        {
            table_core[i][3] = 4;
        }
        i++;
    }
}

/* Agora vamo verificar se um número 4 foi dado como parâmetro,
para assim escrever na matriz a sequência '1234' a partir dele.*/
void colup_four(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 52)
        {
            table_core[0][i] = 1;
            table_core[1][i] = 2;
            table_core[2][i] = 3;
            table_core[3][i] = 4;
        }
        i++;
    }
}

void coldown_four(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[1][i] == 52)
        {
            table_core[3][i] = 1;
            table_core[2][i] = 2;
            table_core[1][i] = 3;
            table_core[0][i] = 4;
        }
        i++;
    }
}

void rowleft_four(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[2][i] == 52)
        {
            table_core[i][0] = 1;
            table_core[i][1] = 2;
            table_core[i][2] = 3;
            table_core[i][3] = 4;
        }
        i++;
    }
}
