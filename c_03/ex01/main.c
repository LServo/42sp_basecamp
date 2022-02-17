/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:53:36 by lservo            #+#    #+#             */
/*   Updated: 2022/02/16 03:53:20 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char str[] = "Lucas";
    char str2[] = "Lu";
    printf("%d\n", ft_strncmp(str, str2, 3));
    printf("%d\n", strncmp(str, str2, 3));
}