/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:16:08 by lservo            #+#    #+#             */
/*   Updated: 2022/02/19 04:16:30 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    unsigned int count;

    if (range == NULL) // O tamanho de range será retornado (ou -1 se houver um problema).
        return (-1);
    if (min < max)
    {
        *range = malloc((max - min) * sizeof(int));
        if (*range == NULL) // verifica se a alocação de memória foi feita corretamente, se não, retorna -1
            return (-1);
        count = 0;
        while (min < max)
            (*range)[count++] = min++;
        return (count);
    }
    *range = NULL; // se min não for menor que max, apontar o range para null e retornar 0
    return (0);
}
