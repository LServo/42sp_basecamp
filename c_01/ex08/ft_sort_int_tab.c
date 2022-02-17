/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:56:04 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 21:32:02 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_redefine_array(int *tab, int *matriz, int size);
void loop_manager(int *tab, int *matriz, int size, int last_index);

void ft_sort_int_tab(int *tab, int size)
{
    int matriz[256];
    int last_index;

    last_index = 0;
    loop_manager(tab, matriz, size, last_index);
    ft_redefine_array(tab, matriz, size);
}

void ft_redefine_array(int *tab, int *matriz, int size)
{
    int count;

    count = 0;
    while (count < size)
    {
        tab[count] = matriz[count];
        count++;
    }
}

void loop_manager(int *tab, int *matriz, int size, int last_index)
{
    int last;
    int count;
    int index;
    int actual;

    last = 0;
    index = 0;
    while (index < size)
    {
        count = 0;
        actual = 999;
        while (count < size)
        {
            if (tab[count] >= last && tab[count] <= actual)
            {
                actual = tab[count];
                last_index = count;
            }
            count++;
        }
        last = actual;
        tab[last_index] = 0;
        matriz[index] = last;
        index++;
    }
}
