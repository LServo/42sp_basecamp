/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:41:43 by lservo            #+#    #+#             */
/*   Updated: 2022/02/18 23:12:42 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    int count;

    count = 0;
    while (str[count])
        write(1, &str[count++], 1);
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    int count;

    count = 1;
    while (argc > count)
        ft_putstr(argv[count++]);
    return (0);
}
