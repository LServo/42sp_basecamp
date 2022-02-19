/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:33:39 by lservo            #+#    #+#             */
/*   Updated: 2022/02/18 20:12:33 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb == 0 || nb == 1)
        return (1);
    if (nb < 0)
        return (0);
    return (nb * ft_recursive_factorial(nb - 1));
}
