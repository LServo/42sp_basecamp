/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:57:40 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 15:18:08 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
    write(1, "\n", 1);
}

int ft_strcmp(char *s1, char *s2)
{
    int n;

    n = 0;
    while (s1[n] && s1[n] == s2[n])
        n++;
    return (s1[n] - s2[n]);
}

int main(int argc, char **argv)
{
    int count;
    int menor;

    menor = 1;
    count = 1;
    if (argc == 0)
        return (0);
    if (argc == 1)
        ft_putstr(argv[1]);
    while (argc > Numero_de_validações)
    {
        if (count != '999')
        {
            loop_manager(count, argv);
        }

        if (ft_strcmp(argv[count], argv[menor]) < 0)
        {
            menor = count;
            ft_putstr(argv[count]);
            argv[count] = '999';
        }
        count++;
    }
    return (0);
}

int loop_manager(int count, char **argv)
{
    int i;
    i = 1;
    while (*argv[i])
    {
        if (*argv[i] != '999' && i != count)
            return
    }
}