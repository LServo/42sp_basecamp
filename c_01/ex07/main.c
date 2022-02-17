/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:36:21 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 21:35:20 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int tab[4];
    int size;

    tab[0] = 0;
    tab[1] = 1;
    tab[2] = 2;
    tab[3] = 3;
    size = 4;
    printf("tab[0] = %d | tab[1] = %d | tab[2] = %d | tab[3] = %d", tab[0], tab[1], tab[2], tab[3]);
    printf("\n");
    ft_rev_int_tab(tab, size);
    printf("tab[0] = %d | tab[1] = %d | tab[2] = %d | tab[3] = %d", tab[0], tab[1], tab[2], tab[3]);
    printf("\n");
    return (0);
}
