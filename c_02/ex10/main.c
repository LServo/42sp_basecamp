/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:05:42 by lservo            #+#    #+#             */
/*   Updated: 2022/02/15 17:19:37 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

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
    src_size = strlcpy(dest, src, sizeof(dest));
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