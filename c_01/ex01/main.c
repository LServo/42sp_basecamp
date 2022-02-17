/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:26:00 by lservo            #+#    #+#             */
/*   Updated: 2022/02/09 17:58:22 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
    int num;
    int *nbr1;
    int **nbr2;
    int ***nbr3;
    int ****nbr4;
    int *****nbr5;
    int ******nbr6;
    int *******nbr7;
    int ********nbr8;
    int *********nbr9;

    num = 21;
    nbr1 = &num;
    nbr2 = &nbr1;
    nbr3 = &nbr2;
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;
    nbr9 = &nbr8;
    printf("%d\n", *********nbr9);
    ft_ultimate_ft(nbr9);
    printf("%d\n", *********nbr9);
    return (0);
}
