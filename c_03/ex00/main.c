/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:29:01 by lservo            #+#    #+#             */
/*   Updated: 2022/02/16 02:32:17 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
    char s1[] = "Luca";
    char s2[] = "Lucax";
    printf("%d\n", ft_strcmp(s1, s2));
    if (sizeof(ft_strcmp(s1, s2)) == sizeof(unsigned int))
        printf("Unsigned Int\n");
    printf("%d\n", strcmp(s1, s2));
}