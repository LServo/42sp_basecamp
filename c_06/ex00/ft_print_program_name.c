/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:25:41 by lservo            #+#    #+#             */
/*   Updated: 2022/02/19 05:35:54 by lservo           ###   ########.fr       */
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
    (void)argc;
    ft_putstr(argv[0]);
    return (0);
}
