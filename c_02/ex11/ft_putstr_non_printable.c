/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:11:52 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 22:48:21 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr_non_printable(char *str)
{
    char *hex;

    hex = "0123456789abcdef";
    while (*str)
    {
        if (*str >= 32 && *str <= 126)
            write(1, str, 1);
        else
        {
            if (*str < 0)
                *str = -*str;
            write(1, "\\", 1);
            write(1, &hex[*str / 16], 1);
            write(1, &hex[*str % 16], 1);
        }
        str++;
    }
}
