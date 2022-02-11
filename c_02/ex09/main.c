/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:00:20 by lservo            #+#    #+#             */
/*   Updated: 2022/02/10 20:57:43 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int main(void)
{
    char str5[] = "ola ceus CARAI!";
    char str6[] = "1Lista de Tarefas";
    char str7[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

    printf("%s", str5);
    ft_strcapitalize(str5);
    printf("\n%s", str5);
    printf("\n\n%s", str6);
    ft_strcapitalize(str6);
    printf("\n%s", str6);
    printf("\n\n%s", str7);
    ft_strcapitalize(str7);
    printf("\n%s", str7);
}