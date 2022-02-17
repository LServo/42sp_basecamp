/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:42:21 by lservo            #+#    #+#             */
/*   Updated: 2022/02/13 15:08:02 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_manager(int num1, int num2)
{
    int tab[6];

    tab[0] = num1 / 10 + 48;
    tab[1] = num1 % 10 + 48;
    tab[2] = ' ';
    tab[3] = num2 / 10 + 48;
    tab[4] = num2 % 10 + 48;
    tab[5] = 0;
    while (tab[5] < 5)
        write(1, &tab[tab[5]++], 1);
    if (num1 == 98 && num2 == 99)
        return;
    write(1, ", ", 2);
}

void ft_numbers_manager(char type, int *num1, int *num2)
{
    if (type == 1)
    {
        *num1 += 1;
        *num2 = *num1;
    }
    *num2 += 1;
}

void ft_loop_manager(int *num1, int *num2)
{
    while (1)
    {
        if (*num2 == 99)
            ft_numbers_manager(1, num1, num2);
        else
            ft_numbers_manager(0, num1, num2);
        if (*num1 == 99)
            break;
        ft_print_manager(*num1, *num2);
    }
}

void ft_print_comb2(void)
{
    int num1;
    int num2;

    num1 = 00;
    num2 = 00;
    ft_loop_manager(&num1, &num2);
}
