/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb copy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:45:43 by lservo            #+#    #+#             */
/*   Updated: 2022/02/08 21:27:58 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print(int a, int b, int c);
void ft_loop(int a, int b, int c);

void ft_print_comb(void)
{
    int n[3];

    n[0] = '0';
    n[1] = '1';
    n[2] = '2';
    while (n[0] <= '7')
    {
        ft_loop(n[0], n[1], n[2]);
        n[0]++;
        n[1]++;
        n[2]++;
    }
}

void ft_loop(int a, int b, int c)
{
    while (b <= '8')
    {
        ft_print(a, b, c);
        c++;
        if (c > '9')
        {
            b++;
            c = b + 1;
        }
    }
}

void ft_print(int a, int b, int c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    if (a < '7')
    {
        write(1, ", ", 2);
    }
    return;
}
