/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 02:53:49 by lservo            #+#    #+#             */
/*   Updated: 2022/02/16 03:36:57 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int size;

    size = 0;
    while (dest[size])
        size++;
    while (*src)
        dest[size++] = *src++;
    dest[size] = '\0';
    return (dest);
}
