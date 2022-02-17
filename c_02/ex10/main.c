/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:05:42 by lservo            #+#    #+#             */
/*   Updated: 2022/02/17 22:34:53 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int ft_strlcpy2(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    int len;

    i = 0;
    len = 0;
    while (src[len])
        len++;
    if (size > 0)
    {
        while (src[i] && (i < (size - 1)))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (len);
}

int main(void)
{
    int src_size;
    char *src;
    char *dest;
    int src_size2;
    char *src2;
    char *dest2;

    src = calloc(10, sizeof(char));
    dest = calloc(8, sizeof(char));
    src = "alo galera";
    src_size = ft_strlcpy2(dest, src, sizeof(dest));
    printf("strlcpy | src: %s\n", src);
    printf("strlcpy | dest: %s\n", dest);
    printf("strlcpy | src_size: %d\n\n", src_size);
    src2 = calloc(10, sizeof(char));
    dest2 = calloc(8, sizeof(char));
    src2 = "alo galera";
    src_size2 = ft_strlcpy(dest2, src2, sizeof(dest2));
    printf("ft_strlcpy | src: %s\n", src2);
    printf("ft_strlcpy | dest: %s\n", dest2);
    printf("ft_strlcpy | src_size: %d\n", src_size2);
    return (0);
}