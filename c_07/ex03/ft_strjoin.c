/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:31:12 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 16:56:24 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count])
        count++;
    return (count);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *tab;
    int count;
    int count1;
    int count2;
    int count3;

    count = 1;
    count1 = 0;
    count2 = 0;
    count3 = 0;
    while (count1 < size)
        count += ft_strlen(strs[count1++]) + ft_strlen(sep);
    tab = malloc(sizeof(char *) * count);
    count1 = -1;
    while (++count1 < size)
    {
        while (strs[count1][count2])
            tab[count3++] = strs[count1][count2++];
        count2 = 0;
        while (sep[count2] && count1 < size - 1)
            tab[count3++] = sep[count2++];
        count2 = 0;
    }
    tab[count3] = '\0';
    return (tab);
}