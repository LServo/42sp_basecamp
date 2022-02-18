/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 05:56:51 by lservo            #+#    #+#             */
/*   Updated: 2022/02/18 06:01:12 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void ft_putnbr_base(int nb, char *base);

void ft_putchar(char c);
void ft_putstr(char *str)
{
    int count;

    count = 0;
    while (str[count])
        count++;
    write(1, str, count);
}

int main(void)
{
    // base binaria
    ft_putstr("Bases binarias, n = 47. \"01\" e \"\\/\"\n");
    ft_putnbr_base(47, "01");
    ft_putchar('\n');
    ft_putstr("Esperado: 101111\n\n");
    ft_putnbr_base(47, "\\/");
    ft_putchar('\n');
    ft_putstr("Esperado: /\\////\n\n");
    // base 5
    ft_putstr("Bases 5, n = 36. \"01345\" e \"sd2ek\"\n");
    ft_putnbr_base(36, "01345");
    ft_putchar('\n');
    ft_putstr("Esperado: 131\n\n");
    ft_putnbr_base(36, "sd2ek");
    ft_putchar('\n');
    ft_putstr("Esperado: d2d\n\n");
    // base 10
    ft_putstr("Bases 10, n = . \"0123456789\" e \",.;\\][{}@#\"\n");
    ft_putnbr_base(INT_MIN, "0123456789");
    ft_putchar('\n');
    ft_putstr("Esperado: -2147483648\n\n");
    ft_putnbr_base(INT_MIN, ",.;\\][{}@#");
    ft_putchar('\n');
    ft_putstr("Esperado: -;.]}]@\\{]@\n\n");
    // base 16
    ft_putstr("Bases 16, n = -65040. \"0123456789ABCDEF\" e \"jdlskmnMKZxVuzfa\"\n");
    ft_putnbr_base(-65040, "0123456789ABCDEF");
    ft_putchar('\n');
    ft_putstr("Esperado: -FE10\n\n");
    ft_putnbr_base(-65040, "jdlskmnMKZxVuzfa");
    ft_putchar('\n');
    ft_putstr("Esperado: -afdj\n\n");
    // base 0 e base 1, nao pode aparecer nada
    ft_putstr("Bases 0 e 1, nao deve aparecer nada, n = 256.\n");
    ft_putnbr_base(-29092, "0");
    ft_putnbr_base(-29092, "");
    return (0);
}