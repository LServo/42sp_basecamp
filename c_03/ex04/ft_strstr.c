/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:46:03 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 02:09:45 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
    int size;

    size = 0;
    if (!to_find)
        return (str);
    while (*str)
    {
        while (to_find[size] == str[size] && to_find[size] && str[size])
            size++;
        if (to_find[size] == '\0')
            return (str);
        str++;
    }
    return (0);
}