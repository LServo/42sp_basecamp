/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:31:12 by lservo            #+#    #+#             */
/*   Updated: 2022/02/19 04:04:29 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count])
        count++;
    return (count);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *tab;
    int size_mem;
    int count1;
    int count2;
    int count3;

    size_mem = 1; // já começa com 1 para ter o espaço do nulo
    count1 = 0;
    count2 = 0;
    count3 = 0;
    while (count1 < size)                                       // size é o tamanho de strs, enquanto for maior que o contador
        size_mem += ft_strlen(strs[count1++]) + ft_strlen(sep); // adiciona todo o length que será necessário ao size_mem
    tab = malloc(sizeof(char *) * size_mem);                    // aloca memória do tipo char x size_mem
    count1 = -1;                                                // começa com o contador -1 para poder incrementar direto no while
    while (++count1 < size)                                     // enquanto o size for maior que o contador, lembrando que size é o tamanho da string
    {
        while (strs[count1][count2])                // enquanto a letra atual não for nula
            tab[count3++] = strs[count1][count2++]; // copia para o tab 3 e vai para a próxima até finalizar a string
        count2 = 0;                                 // zera o contador para adicionar o separador agora
        while (sep[count2] && count1 < size - 1)    // enquanto o separador é válido (não sabemos o que ele é, pode se ruma vírgula ou uma frase)
                                                    // validamos também se o contador é menor que o size deixando o caractere nulo de fora, para não ter problemas
            tab[count3++] = sep[count2++];          // se estiver tudo ok, adicionamos o separador até o fim
        count2 = 0;                                 // redefinimos o count2 para que ele possa ser utilizado no próximo ciclo do while passando por todas as letras da próxima palavra e depois adicionando o reparador novamente
    }
    tab[count3] = '\0'; // ao fim de tudo, adicionamos o caractere nulo, no ultimo espaço de memória do count3
    // não irá substituir nenhuma palavra porque ao fim do ultimo ciclo do while ele incrementa o 3 e o 2 e não entra novamente para utilizar, logo é um espaço vazio o index atual do count3
    return (tab);
}
