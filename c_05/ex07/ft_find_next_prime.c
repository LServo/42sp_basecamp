/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:16:28 by lservo            #+#    #+#             */
/*   Updated: 2022/02/18 20:13:27 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime2(int nb)
{
    int count;

    count = 2;
    if (nb < 2)
        return (0);
    while (count <= nb / 2 && count <= 46341)
    {
        if (nb % count == 0)
            return (0);
        count++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    while (nb < 2147483647 && !ft_is_prime2(nb))
        nb++;
    return (nb);
}
