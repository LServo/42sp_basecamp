/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:16:08 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 16:29:01 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int count;

    count = 0;
    if (max <= min)
    {
        *range = NULL;
        return (0);
    }
    *range = malloc(sizeof(int *) * (max - min));
    if (!*range)
        return (-1);
    while (min < max)
        (*range)[count++] = min++;
    return (count);
}