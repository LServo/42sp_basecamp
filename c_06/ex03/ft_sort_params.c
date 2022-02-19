/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:57:40 by lservo            #+#    #+#             */
/*   Updated: 2022/02/18 23:52:45 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void swap_tab_sort(char *num1, char *num2)
{
    int swap;

    swap = *num1;
    *num1 = *num2;
    *num2 = swap;
}

void ft_putstr(char *str)
{
    int count;

    count = 0;
    while (str[count])
        write(1, &str[count++], 1);
    write(1, "\n", 1);
}

int ft_strcmp(char *s1, char *s2)
{
    int count;

    count = 0;
    while (s1[count] && s1[count] == s2[count])
        count++;
    return (s1[count] - s2[count]);
}

int main(int argc, char **argv)
{
    int count;

    count = 1;
    if (argc == 0)
        return (0);
    if (argc == 1)
        ft_putstr(argv[1]);
    while (argc > count)
    {
        if (ft_strcmp(argv[count], argv[count + 1]) < 0)
        {
            swap_tab_sort(argv[count], argv[count + 1]);
            count = 1;
            continue;
        }
        count++;
    }
    count = 1;
    while (argc > count)
        ft_putstr(argv[count++]);
    return (0);
}
