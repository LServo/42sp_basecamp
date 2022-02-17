/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:16:28 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 13:22:11 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int loop_manager(int nb)
{
    int tmp;
    int soma;

    tmp = nb + 1;
    soma = 0;
    while (--tmp)
        if (tmp > 0 && nb % tmp == 0)
            soma += 1;
    if (soma == 2)
        return (nb);
    return (loop_manager(nb + 1));
}

int ft_find_next_prime(int nb)
{
    return (loop_manager(nb + 1));
}