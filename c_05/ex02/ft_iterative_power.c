/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:43:05 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 11:48:27 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int tmp;

    tmp = nb;
    if (power < 0)
        return (0);
    if (power == 1)
        return (1);
    while (2 <= power--)
        tmp *= nb;
    return (tmp);
}