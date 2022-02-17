/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startswith2_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:31:43 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/13 22:59:44 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void twocolup_endonefour(char table[4][4], int table_core[4][4]);
void twocoldown_endonefour(char table[4][4], int table_core[4][4]);
void tworowleft_endonefour(char table[4][4], int table_core[4][4]);
void tworowright_endonefour(char table[4][4], int table_core[4][4]);
void twocolup_endfourthree(char table[4][4], int table_core[4][4]);
void twocoldown_endfourthree(char table[4][4], int table_core[4][4]);
void tworowleft_endfourthree(char table[4][4], int table_core[4][4]);
void tworowright_endfourthree(char table[4][4], int table_core[4][4]);
void twocolup_onesecondlastfour(char table[4][4], int table_core[4][4]);
void twocoldown_onesecondlastfour(char table[4][4], int table_core[4][4]);

void tworowleft_onesecondlastfour(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[2][i] == 50)
        {
            if (table_core[i][3] == 4 && table_core[i][1] == 1)
            {
                table_core[i][0] = 3;
                table_core[i][2] = 2;
            }
        }
        i++;
    }
}

void tworowright_onesecondlastfour(char table[4][4], int table_core[4][4])
{
    int i;

    i = 0;
    while (i != 4)
    {
        if (table[3][i] == 50)
        {
            if (table_core[i][0] == 4 && table_core[i][2] == 1)
            {
                table_core[i][1] = 2;
                table_core[i][3] = 3;
            }
        }
        i++;
    }
}

void startswith2(char table[4][4], int table_core[4][4])
{
    twocolup_endonefour(table, table_core);
    twocoldown_endonefour(table, table_core);
    tworowleft_endonefour(table, table_core);
    tworowright_endonefour(table, table_core);
    twocolup_endfourthree(table, table_core);
    twocoldown_endfourthree(table, table_core);
    tworowleft_endfourthree(table, table_core);
    tworowright_endfourthree(table, table_core);
    twocolup_onesecondlastfour(table, table_core);
    twocoldown_onesecondlastfour(table, table_core);
}
