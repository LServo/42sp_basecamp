/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:28:49 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 22:51:34 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
    int count;

    count = 0;
    while (src[count])
    {
        dest[count] = src[count];
        count++;
    }
    return (dest);
}
