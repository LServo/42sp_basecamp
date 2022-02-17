/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:19:17 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 21:32:58 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *str;
    int count;

    str = "Lucas Servo\n";
    count = ft_strlen(str);
    printf("str=\"%s\"\nstrlen=%d\n", str, count);
    return (0);
}
