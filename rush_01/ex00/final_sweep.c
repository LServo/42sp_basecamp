/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sweep.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:57:43 by lservo            #+#    #+#             */
/*   Updated: 2022/02/14 03:38:49 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int sweep_line2(int tab[6], int table_core[4][4]);
int sweep_column2(int tab[6], int table_core[4][4]);
void sweep_input2(int tab[6], int table_core[4][4]);
void sweep_lines(int umAquatro[4], char zeros[4], int table_core[4][4]);
void sweep_columns(int umAquatro[4], char zeros[4], int table_core[4][4]);
void sweep_input(int umAquatro[4], char zeros[4], int table_core[4][4]);
void sweep_reference(char zeros[4], int refer[4]);
void sweep_numbers(int num[3], int refer[4], int refer2[3], int umAquatro[4]);

void sweep_table2(int table_core[4][4])
{
    int tab[6] = {0, 0, 0, 0, 0, 0};

    while (1)
    {
        tab[5] = sweep_line2(tab, table_core);
        if (tab[5] != 0)
        {
            sweep_input2(tab, table_core);
        }
        else
            break;
    }

    while (1)
    {
        tab[5] = sweep_column2(tab, table_core);
        if (tab[5] != 0)
        {
            sweep_input2(tab, table_core);
        }
        else
            break;
    }
}

int sweep_line2(int tab[6], int table_core[4][4])
{
    int row;
    int col;
    row = 0;
    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            if (table_core[row][col] == 1)
                tab[0]++;
            if (table_core[row][col] == 2)
                tab[1]++;
            if (table_core[row][col] == 3)
                tab[2]++;
            if (table_core[row][col] == 4)
                tab[3]++;
            if (table_core[row][col] == 0)
                tab[4] = col;
            col++;
        }
        if (tab[0] + tab[1] + tab[2] + tab[3] == 3)
            return (row);
        row++;
    }
    return (0);
}

int sweep_column2(int tab[6], int table_core[4][4])
{
    int row;
    int col;
    col = 0;
    while (col < 4)
    {
        row = 0;
        while (row < 4)
        {
            if (table_core[row][col] == 1)
                tab[0]++;
            if (table_core[row][col] == 2)
                tab[1]++;
            if (table_core[row][col] == 3)
                tab[2]++;
            if (table_core[row][col] == 4)
                tab[3]++;
            if (table_core[row][col] == 0)
                tab[4] = col;
            row++;
        }
        if (tab[0] + tab[1] + tab[2] + tab[3] == 3)
            return (row);
        col++;
    }
    return (0);
}

void sweep_input2(int tab[6], int table_core[4][4])
{
    int count;

    while (count < 6)
    {
        if (tab[count] == 0)
        {
            table_core[tab[5]][tab[4]] = tab[count];
            tab[0] = 0;
            tab[1] = 0;
            tab[2] = 0;
            tab[3] = 0;
            tab[4] = 0;
            tab[5] = 0;
            break;
        }
        count++;
    }
}

void sweep_table(int table_core[4][4])
{
    int umAquatro[4] = {0, 0, 0, 0};
    char zeros[4] = {0, 0, 0, 0};

    sweep_lines(umAquatro, zeros, table_core);
    umAquatro[0] = 0;
    umAquatro[1] = 0;
    umAquatro[2] = 0;
    umAquatro[3] = 0;
    zeros[0] = 0;
    zeros[1] = 0;
    zeros[2] = 0;
    zeros[3] = 0;
    sweep_columns(umAquatro, zeros, table_core);
}

void sweep_lines(int umAquatro[4], char zeros[4], int table_core[4][4])
{
    int row;
    int col;
    int count1;
    row = 0;
    count1 = 0;
    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            if (table_core[row][col] == 1)
                umAquatro[0]++;
            if (table_core[row][col] == 2)
                umAquatro[1]++;
            if (table_core[row][col] == 3)
                umAquatro[2]++;
            if (table_core[row][col] == 4)
                umAquatro[3]++;
            if (table_core[row][col] == 0)
                while (count1 < 4)
                {
                    if (zeros[count1] == 0)
                    {
                        zeros[count1] = (row + '0') + (col + '0');
                        break;
                    }
                    else
                        count1++;
                }
            col++;
        }
        sweep_input(umAquatro, zeros, table_core);
        row++;
    }
}

void sweep_columns(int umAquatro[4], char zeros[4], int table_core[4][4])
{
    int row;
    int col;
    int count1;
    col = 0;
    count1 = 0;
    while (col < 4)
    {
        row = 0;
        while (row < 4)
        {
            if (table_core[row][col] == 1)
                umAquatro[0]++;
            if (table_core[row][col] == 2)
                umAquatro[1]++;
            if (table_core[row][col] == 3)
                umAquatro[2]++;
            if (table_core[row][col] == 4)
                umAquatro[3]++;
            if (table_core[row][col] == 0)
                while (count1 < 4)
                {
                    if (zeros[count1] == 0)
                    {
                        zeros[count1] = (row + '0') + (col + '0');
                        break;
                    }
                    else
                        count1++;
                }
            row++;
        }
        sweep_input(umAquatro, zeros, table_core);
        col++;
    }
}

void sweep_input(int umAquatro[4], char zeros[4], int table_core[4][4])
{
    // recuperar as posições da tabela de char, passando o -48 para virar int e utilizando do / e %
    // passar row e col junto com umAquatro para descobrir quais números a referência proporciona e quais números estamos buscando
    // salvar referencias em novas variáveis refer[x]
    // jogar refer, umAquatro e zeros para outra função (refer tem o mesmo index que zeros)
    // refer nunca vai ser 1 ou 4, apenas 2 ou 3

    int num[3];
    int refer[4];
    int refer2[3];
    int pos[2];

    sweep_reference(zeros, refer);
    sweep_numbers(num, refer, refer2, umAquatro);

    // loop do umAquatro deve estar dentro do loop refer
    // depois de passar por todas as referências, validamos as correspondências e caso seja apenas 1 seguimos, caso seja maior, retornamos
    // criar refer2[3] para salvar o index da referência a cada vez que subimos o respectivo valor de num
    // num1 == refer2[0] | num2 == refer2[1] | num3 == refer2[2]
    // caso tenha apenas uma correspondencia, recuperamos as posições passando o refer2 como index para o zeros

    if (num[0] == 1)
    {
        pos[0] = (zeros[refer2] - 48) / 10;
        pos[1] = (zeros[refer2] - 48) % 10;
        table_core[pos[0]][pos[1]] = num[0];
    }
    if (num[1] == 1)
    {
        pos[0] = (zeros[refer2] - 48) / 10;
        pos[1] = (zeros[refer2] - 48) % 10;
        table_core[pos[0]][pos[1]] = num[1];
    }
    if (num[2] == 1)
    {
        pos[0] = (zeros[refer2] - 48) / 10;
        pos[1] = (zeros[refer2] - 48) % 10;
        table_core[pos[0]][pos[1]] = num[2];
    }
}

// loop => reconhecer o que falta ser jogado na linha (mesma coisa do sweep loop, porém, guarda todos os row e col dos zeros)
// pegar essas posições(row e col) e jogar para outra função que irá descobrir sua referência de tabela
// descobrindo as referências, validamos se possui um dos números que é necessário
// após validar todos, conferimos quantas correspondências existem, se for apenas uma, inserimos na devida posição do core

void sweep_reference(char zeros[4], int refer[4])
{
    int row;
    int col;
    int count;

    while (count < 4)
    {
        row = (zeros[count] - 48) / 10;
        col = (zeros[count] - 48) % 10;

        if (row == 0 && col == 0)
        {
            if (table[0][0] > table[2][0])
                refer[count] = table[0][0];
            else
                refer[count] = table[2][0];
        }
        if (row == 0 && col == 1)
            refer[count] = table[0][1];
        if (row == 0 && col == 2)
            refer[count] = table[0][2];
        if (row == 0 && col == 3)
            refer[count] = table[0][3];

        if (row == 1 && col == 0)
            refer[count] = table[2][1];
        if (row == 1 && col == 1)
            refer[count] = 0;
        if (row == 1 && col == 2)
            refer[count] = 0;
        if (row == 1 && col == 3)
            refer[count] = table[3][1];

        if (row == 2 && col == 0)
            refer[count] = table[2][2];
        if (row == 2 && col == 1)
            refer[count] = 0;
        if (row == 2 && col == 2)
            refer[count] = 0;
        if (row == 2 && col == 3)
            refer[count] = table[3][2];

        if (row == 3 && col == 0)
            refer[count] = table[1][0];
        if (row == 3 && col == 1)
            refer[count] = table[1][1];
        if (row == 3 && col == 2)
            refer[count] = table[1][2];
        if (row == 3 && col == 3)
            refer[count] = table[1][3];
    }
}

void sweep_numbers(int num[3], int refer[4], int refer2[3], int umAquatro[4])
{
    int count1;
    int count2;

    while (count1 < 4)
    {
        count2 = 0;
        while (count2 < 4)
        {
            if (umAquatro[count2] == 0)
            {
                if (refer[count1] == 2)
                {
                    if (1 == count2 + 1)
                        num[0]++;
                    refer2[0] = count1;
                    if (2 == count2 + 1)
                        num[1]++;
                    refer2[1] = count1;
                    if (3 == count2 + 1)
                        num[2]++;
                    refer2[2] = count1;
                }
                if (refer[count1] == 3)
                {
                    if (1 == count2 + 1)
                        num[0]++;
                    refer2[0] = count1;
                    if (2 == count2 + 1)
                        num[1]++;
                    refer2[1] = count1;
                }
            }
            count2++;
        }
        count1++;
    }
}