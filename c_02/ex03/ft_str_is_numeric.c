/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:48:37 by lservo            #+#    #+#             */
/*   Updated: 2022/02/10 13:59:46 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
    while (*str)
    {
        if (!(*str >= '0' && *str <= '9'))
            return (0);
        str++;
    }
    return (1);
}