/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:15:16 by lservo            #+#    #+#             */
/*   Updated: 2022/02/16 21:59:03 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int sign;
    int result;

    sign = 1;
    result = 0;
    while (*str <= 32)
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -sign;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result *= 10;
        result += sign * (*str - 48);
        str++;
    }
    return (result);
}