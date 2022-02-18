/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:05:34 by lservo            #+#    #+#             */
/*   Updated: 2022/02/18 06:07:02 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int error_manager(char *base, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (base[count])
        if (base[count++] == c) // validando se tem caractere repetido
            i++;
    if (i >= 2)
        return (0);
    return (1);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_strprint(unsigned int nbr, char *base, unsigned int size)
{
    if (nbr > size - 1)
    {
        ft_strprint(nbr / size, base, size); // utilizando de recursividade para reduzir o valor de nbr até que tenha o mesmo valor de size, só que com -1, para guardar o nulo ao fim
        nbr %= size;
    }
    ft_putchar(base[nbr]);
}

void ft_putnbr_base(int nbr, char *base)
{
    int count;

    count = 0;
    while (base[count])
    {
        if ((base[count] == '-' || base[count] == '+' || !error_manager(base, base[count]))) // validando casos de error
            return;
        count++;
    }
    if (count < 2) // validação de caso de error
        return;
    if (nbr < 0) // se for menor que zero já passa como negativo, para não precisar fazer conversão no código
    {
        ft_putchar('-');
        ft_strprint(-nbr, base, count);
    }
    else
        ft_strprint(nbr, base, count);
}
