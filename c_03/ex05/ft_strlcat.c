/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:52:19 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 23:19:21 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int count;

    dest_len = 0;
    src_len = 0;
    count = -1;
    while (src[src_len])
        src_len++;
    while (dest[dest_len])
        dest_len++;
    if (size <= dest_len)
        return (src_len + size);
    while (src[++count] && (size - 1) > (dest_len + count))
        dest[dest_len + count] = src[count];
    dest[dest_len + count] = '\0';
    return (dest_len + src_len);
}
