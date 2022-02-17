/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:04:50 by lservo            #+#    #+#             */
/*   Updated: 2022/02/16 20:15:26 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int ft_strlcat2(char *dest, char *src, unsigned int size);
unsigned int ft_strlcat3(char *dest, char *src, unsigned int size);

void ft_strlcat_test(char *dest, char *ft_dest, char *src, unsigned int size)
{
    unsigned int return_value;
    unsigned int ft_return_value;

    return_value = ft_strlcat2(dest, src, size);
    ft_return_value = ft_strlcat(ft_dest, src, size);
    if (return_value != ft_return_value)
        printf("> KO, expected: %u, got: %u | ", return_value, ft_return_value);
    else if (strcmp(dest, ft_dest) != 0)
        printf("> KO, expected: %s, got: %s | ", dest, ft_dest);
    else
        printf("> OK, result: %s | ", ft_dest);
    printf("original => %d -> %s | ", return_value, dest);
    printf("paraguai => %d -> %s\n", ft_return_value, ft_dest);
}

int main(void)
{
    char src[] = "stuv";
    char dest[] = "abcdefghijklmnopr";
    char ft_dest[] = "abcdefghijklmnopr";

    // invalid case, dest is non null terminated in the first size - 1 bytes.
    ft_strlcat_test(dest, ft_dest, src, 0);
    ft_strlcat_test(dest, ft_dest, src, 1);
    ft_strlcat_test(dest, ft_dest, src, 4);
    ft_strlcat_test(dest, ft_dest, src, 10);
    ft_strlcat_test(dest, ft_dest, src, 21);
    // valid case, dest is null terminated in the first size - 1 bytes, modified and terminated
    char src2[] = "ghijkl";
    char *dest2;
    char *ft_dest2;
    dest2 = strcpy(calloc(13, sizeof(char)), "abcdef");
    ft_dest2 = strcpy(calloc(13, sizeof(char)), "abcdef");
    ft_strlcat_test(dest2, ft_dest2, src2, 8);
    ft_strlcat_test(dest2, ft_dest2, src2, 10);
    return (0);
}