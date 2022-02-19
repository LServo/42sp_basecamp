/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:24:25 by lservo            #+#    #+#             */
/*   Updated: 2022/02/19 03:42:17 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *out;
    unsigned int count1;
    unsigned int count2;

    count1 = 0;
    while (src[count1] != '\0')
        count1++;
    out = malloc(count1 + 1); // aloca memória do mesmo tipo e tamanho de int + o espaço do nulo
    if (!out)                 // se a alocação não der certo, retorna null
        return (NULL);
    count2 = -1; // começa contador com -1 pra poder fazer o incremento direto no while
    while (count1 > ++count2)
        out[count2] = src[count2]; // duplica a string
    out[count2] = '\0';            // adiciona o caracter nulo
    return (out);
}
