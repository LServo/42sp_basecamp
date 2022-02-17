/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:24:25 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 16:06:10 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *out;
    unsigned int count1;
    unsigned int count2;

    count1 = 0;
    while (src[count1] != 0)
        count1++;
    out = malloc(count1);
    count2 = -1;
    while (count1 > ++count2)
        out[count2] = src[count2];
    out[count2] = 0;
    return (out);
}