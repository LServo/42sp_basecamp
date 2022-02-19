/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:05:40 by lservo            #+#    #+#             */
/*   Updated: 2022/02/18 20:15:05 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
    int count;

    count = -1;
    while (++count < 46341) // o número máximo de um tipo int é 2147483647, a raiz quadrada dele é 46340.9, ou seja 46341 iterações
        if ((count * count) == nb)
            return (count);
    return (0);
}
