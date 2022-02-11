/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:40:39 by lservo            #+#    #+#             */
/*   Updated: 2022/02/10 13:26:47 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int count;

    count = -1;
    while (*src && src[++count] != '\0')
    {
        if (count < n)
            dest[count] = src[count];
        else
            dest[count] = '\0';
    }
    return (dest);
}