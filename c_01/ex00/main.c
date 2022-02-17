/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:59:02 by lservo            #+#    #+#             */
/*   Updated: 2022/02/09 17:59:05 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int *nbr;
    int n;

    nbr = &n;
    ft_ft(nbr);
    printf("n: %d, *nbr: %d, n_address: %p\n", n, *nbr, nbr);
    return (0);
}