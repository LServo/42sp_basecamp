/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:23:17 by lservo            #+#    #+#             */
/*   Updated: 2022/02/10 21:01:01 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
            *str += 32;
        if (!(*(str - 1) >= 'A' && *(str - 1) <= 'Z'))
            if (!(*(str - 1) >= 'a' && *(str - 1) <= 'z'))
                if (!(*(str - 1) >= '0' && *(str - 1) <= '9'))
                    if (*str >= 'a' && *str <= 'z')
                        *str -= 32;
        str++;
    }
    return (str);
}

// primeira letra da frase
// após espaço ou simbolos, incluindo virgula
// após números NÃO
//  || !(*str[-1] >= '0' && *str[-1] <= '9')
// + 32 == a
// - 32 == A