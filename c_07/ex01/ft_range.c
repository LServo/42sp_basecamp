/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:07:21 by lservo            #+#    #+#             */
/*   Updated: 2022/02/19 03:48:53 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *ptr;
    int count;
    int size;

    count = 0;
    size = max - min;
    ptr = malloc(sizeof(int) * size); // aloca memória do tamanho da diferença existente entre o intervalo de min e max
    if (max <= min || ptr == NULL)    // caso exista problema na alocação ou os parâmetros estejam incorretos, retorna um ponteiro nulo
    {
        ptr = NULL;
        return (ptr);
    }
    while (min < max) // enquanto max for maior que min, duplica os valores e incrementa o min, quando chegar no max para, já que ele não deve ser copiado
        ptr[count++] = min++;
    return (ptr);
}
