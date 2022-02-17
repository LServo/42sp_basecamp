/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:05:34 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 00:40:39 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void loop_manager(int nbr, int baseN, char *base);
int error_manager(char *base);

void ft_putnbr_base(int nbr, char *base)
{
    int base_n;

    base_n = error_manager(base);
    if (base_n < 2)
        return;
    if (nbr < '-')
    {
        write(1, "-", 1);
        nbr *= -1;
    }
    loop_manager(nbr, base_n, base);
}

void loop_manager(int nbr, int base_n, char *base)
{
    if (nbr >= base_n)
        loop_manager((nbr / base_n), base_n, base);
    write(1, &base[nbr % base_n], 1);
}

int error_manager(char *base)
{
    int count1;
    int count2;

    count1 = 0;
    if (*base < 2)
        return (0);
    while (base[count1])
    {
        if (base[count1] == '+' || base[count1] == '-')
            return (0);
        count2 = count1;
        while (base[count2])
        {
            if (base[count2] == base[count1])
                return (0);
        }
        count1++;
    }
    return (count1);
}