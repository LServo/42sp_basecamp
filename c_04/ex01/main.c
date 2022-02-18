/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:46:17 by lservo            #+#    #+#             */
/*   Updated: 2022/02/18 05:56:12 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str);

int main(void)
{
    char *str;

    str = "";
    ft_putstr(str);
    write(1, "\n", 1);
    str = "This is a test string.";
    ft_putstr(str);
    write(1, "\n", 1);
    str = "This is a gianormous test string, testing to see whatever happens in here....";
    ft_putstr(str);
    write(1, "\n", 1);
    return (0);
}