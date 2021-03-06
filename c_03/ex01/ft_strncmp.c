/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:53:04 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 23:10:27 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    while (*s1 && *s1 == *s2 && 0 < --n)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
