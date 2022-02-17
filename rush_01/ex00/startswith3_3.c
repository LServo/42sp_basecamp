/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startswith3_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:12:45 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/13 23:00:18 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rowleft_endtwofour(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[2][i] == 51)
        {
            if (table_core[i][2] == 2 && table_core[i][3] == 4)
            {
                table_core[i][0] = 1;
                table_core[i][1] = 3;
            }
        }
        i++;
    }
}

void rowright_endtwofour(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 51)
        {
            if (table_core[i][1] == 2 && table_core[i][0] == 4)
            {
                table_core[i][3] = 1;
                table_core[i][2] = 3;
            }
        }
        i++;
    }
}

void colup_endfourone(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 51)
        {
            if (table_core[2][i] == 4 && table_core[3][i] == 1)
            {
                table_core[0][i] = 2;
                table_core[1][i] = 3;
            }
        }
        i++;
    }
}

void coldown_endfourone(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[1][i] == 51)
        {
            if (table_core[1][i] == 4 && table_core[0][i] == 1)
            {
                table_core[3][i] = 2;
                table_core[2][i] = 3;
            }
        }
        i++;
    }
}

void rowleft_endfourone(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[2][i] == 51)
        {
            if (table_core[i][2] == 4 && table_core[i][3] == 1)
            {
                table_core[i][0] = 2;
                table_core[i][1] = 3;
            }
        }
        i++;
    }
}
