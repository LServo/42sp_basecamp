/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:46:17 by lservo            #+#    #+#             */
/*   Updated: 2022/02/18 05:55:58 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb);

int main(void)
{
    write(1, "-1: ", 4);
    ft_putnbr(-1);
    write(1, "\n1: ", 4);
    ft_putnbr(1);
    write(1, "\n-10: ", 6);
    ft_putnbr(-10);
    write(1, "\n10: ", 5);
    ft_putnbr(10);
    write(1, "\nINT_MAX: ", 10);
    ft_putnbr(INT_MAX);
    write(1, "\nINT_MIN: ", 10);
    ft_putnbr(INT_MIN);
    write(1, "\n", 1);
    return (0);
}