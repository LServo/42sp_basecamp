/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:45:35 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 22:47:56 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
    while (*str)
    {
        if (!(*str >= 32 && *str <= 127))
            return (0);
        str++;
    }
    return (1);
}
