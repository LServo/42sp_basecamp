/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:00:07 by lservo            #+#    #+#             */
/*   Updated: 2022/02/18 20:12:21 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    if (index < 0)
        return (-1);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
