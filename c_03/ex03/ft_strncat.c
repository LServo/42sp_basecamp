/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 02:53:49 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 21:04:05 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int size;

    size = 0;
    while (dest[size])
        size++;
    while (*src && 0 < nb--)
        dest[size++] = *src++;
    dest[size] = '\0';
    return (dest);
}
