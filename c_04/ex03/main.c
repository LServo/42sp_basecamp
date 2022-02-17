/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:23:23 by lservo            #+#    #+#             */
/*   Updated: 2022/02/16 21:51:49 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(char *str);
int ft_atoi2(char *str);

int main()
{
    char str[] = " 	---+--+1234ab567";

    printf("String value = %s, Int value = %d\n", str, ft_atoi2(str));
    printf("String value = %s, Int value = %d\n", str, ft_atoi(str));
    return (0);
}