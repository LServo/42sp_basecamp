/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:43:05 by lservo            #+#    #+#             */
/*   Updated: 2022/02/18 20:12:30 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int result;

    result = 1;
    if (power < 0)
        return (0);
    if (nb == 0 && power == 0)
        return (1);
    while (power--)
        result *= nb;
    return (result);
}
