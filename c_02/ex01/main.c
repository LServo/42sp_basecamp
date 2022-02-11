#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    unsigned int n = 10;
    char src[] = "Hello World!";
    char *dest;

    dest = calloc(12, sizeof(char));
    ft_strncpy(dest, src, n);
    printf("%s\n", dest);
    return (0);
}