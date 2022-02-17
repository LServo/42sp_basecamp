/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:13:18 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 22:50:25 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int count;

    count = 0;
    while (*src)
    {
        if (size > ++count)
            *dest++ = *src++;
        else
            src++;
    }
    *dest = '\0';
    return (count);
}
