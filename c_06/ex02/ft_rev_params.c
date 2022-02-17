/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:48:30 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 22:11:43 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    while (*argv[argc - 1] && 1 < argc--)
        ft_putstr(argv[argc]);
    return (0);
}