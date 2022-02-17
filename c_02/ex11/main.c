/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:47 by lservo            #+#    #+#             */
/*   Updated: 2022/02/15 19:54:26 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putstr_non_printable(char *str);

int main(void)
{
    char strtest0[] = {'0', '1', 3, 26, '2', '3', -12, 'f', '\n', 'a', 'b', '\0'};
    char strans0[] = "01\\03\\1a23\\0cf\\0aab";

    write(1, "Seu resultado => ", 17);
    ft_putstr_non_printable(strtest0);
    printf("\nMeu resultado => %s\n", strans0);
    return (0);
}