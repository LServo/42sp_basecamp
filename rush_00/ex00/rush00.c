/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggardina <ggardina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:51:38 by ggardina          #+#    #+#             */
/*   Updated: 2022/02/06 21:57:33 by ggardina         ###   ########.fr       */
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
    if (line == 1 || line == y)
        print_abc(x, 'o', '-', 'o');
    else
        print_abc(x, '|', ' ', '|');
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
