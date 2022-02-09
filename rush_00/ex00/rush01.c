/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggardina <ggardina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:11:44 by ggardina          #+#    #+#             */
/*   Updated: 2022/02/06 23:17:36 by ggardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void print_abc(int x, char first_word, char mid_word, char last_word)
{
    int column;

    column = 1;
    while (column <= x)
    {
        if (column == 1)
            ft_putchar(first_word);
        else if (column == x)
            ft_putchar(last_word);
        else
            ft_putchar(mid_word);
        column++;
    }
}

void abc_line(int line, int x, int y)
{
    if (line == 1)
        print_abc(x, '/', '*', '\\');
    else if (line == y)
        print_abc(x, '\\', '*', '/');
    else
        print_abc(x, '*', ' ', '*');
}

void rush(int x, int y)
{
    int line;

    if (x < 1 || y < 1)
    {
        ft_putchar('!');
        ft_putchar('e');
        ft_putchar('r');
        ft_putchar('r');
        ft_putchar('\n');
        return;
    }
    line = 1;
    while (line <= y)
    {
        abc_line(line, x, y);
        ft_putchar('\n');
        line++;
    }
}
