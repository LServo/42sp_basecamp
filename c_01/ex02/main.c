/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:38:27 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 21:36:05 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_swap(int *a, int *b);

int main(void)
{
    int *a = calloc(1, sizeof(int));
    int *b = calloc(1, sizeof(int));

    *a = 42;
    *b = 24;
    printf("Before:\n %p: %d, %p %d\n", a, *a, b, *b);
    ft_swap(a, b);
    printf("After:\n %p: %d, %p %d\n", a, *a, b, *b);
    return (0);
}
