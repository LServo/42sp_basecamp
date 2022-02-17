/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:36:06 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 16:44:32 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
    char **strs;
    char *res_str;

    strs = malloc(3 * sizeof(char *));
    if (strs == NULL)
        return (1);
    strs[0] = "Lucas";
    strs[1] = "Servo";
    strs[2] = "Senhor!";
    res_str = ft_strjoin(3, strs, ", ");
    if (res_str == NULL)
        return (1);
    printf("esperado => Lucas, Servo, Senhor!\n");
    printf("obtido   => %s\n", res_str);
    free(strs);
    free(res_str);
    return (0);
}