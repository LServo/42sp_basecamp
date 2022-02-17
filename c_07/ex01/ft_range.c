/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:07:21 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 16:15:40 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *ptr;
    int count;

    count = 0;
    ptr = malloc(sizeof(int *) * (max - min));
    if (max <= min || ptr == NULL)
    {
        ptr = NULL;
        return (ptr);
    }
    while (min < max)
        ptr[count++] = min++;
    return (ptr);
}