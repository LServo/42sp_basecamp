/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:06:53 by ggardina          #+#    #+#             */
/*   Updated: 2022/02/07 21:54:19 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_str(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

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
        print_abc(x, 'A', 'B', 'C');
    else
        print_abc(x, 'B', ' ', 'B');
}

void rush(int x, int y)
{
    int line;

    if (x < 1 || y < 1)
        return (ft_str("!err\n"));
    line = 1;
    while (line <= y)
    {
        abc_line(line, x, y);
        ft_putchar('\n');
        line++;
    }
}
