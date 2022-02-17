/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_rules2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:36:07 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/13 23:51:43 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void col_one(char table[4][4], int table_core[4][4]);
void row_one(char table[4][4], int table_core[4][4]);
void colup_four(char table[4][4], int table_core[4][4]);
void coldown_four(char table[4][4], int table_core[4][4]);
void rowleft_four(char table[4][4], int table_core[4][4]);
void rowright_four(char table[4][4], int table_core[4][4]);
void row_threeandtwo(char table[4][4], int table_core[4][4]);
void col_threeandtwo(char table[4][4], int table_core[4][4]);
void row_twoandone(char table[4][4], int table_core[4][4]);
void col_twoandone(char table[4][4], int table_core[4][4]);
void rowleft_oneandthree(char table[4][4], int table_core[4][4]);
void rowright_oneandthree(char table[4][4], int table_core[4][4]);
void colup_oneandthree(char table[4][4], int table_core[4][4]);
void coldown_oneandthree(char table[4][4], int table_core[4][4]);
void rowleft_twoandthree(char table[4][4], int table_core[4][4]);

void rowright_twoandthree(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 50 && table[2][i] == 51)
        {
            if (table_core[i][3] == 3 && table_core[i][2] == 4)
            {
                table_core[i][1] = 2;
                table_core[i][0] = 1;
            }
        }
        i++;
    }
}

void colup_twoandthree(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 50 && table[1][i] == 51)
        {
            if (table_core[0][i] == 3 && table_core[1][i] == 4)
            {
                table_core[2][i] = 2;
                table_core[3][i] = 1;
            }
        }
        i++;
    }
}

void coldown_twoandthree(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[0][i] == 51 && table[1][i] == 50)
        {
            if (table_core[3][i] == 3 && table_core[2][i] == 4)
            {
                table_core[1][i] = 2;
                table_core[0][i] = 1;
            }
        }
        i++;
    }
}

void rules(char table[4][4], int table_core[4][4])
{
    col_one(table, table_core);
    row_one(table, table_core);
    colup_four(table, table_core);
    coldown_four(table, table_core);
    rowleft_four(table, table_core);
    rowright_four(table, table_core);
    row_threeandtwo(table, table_core);
    col_threeandtwo(table, table_core);
    row_twoandone(table, table_core);
    col_twoandone(table, table_core);
    rowleft_oneandthree(table, table_core);
    rowright_oneandthree(table, table_core);
    colup_oneandthree(table, table_core);
    rowleft_twoandthree(table, table_core);
    rowright_twoandthree(table, table_core);
    colup_twoandthree(table, table_core);
    coldown_twoandthree(table, table_core);
}
