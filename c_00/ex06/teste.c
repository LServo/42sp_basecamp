#include <stdio.h>

void teste(void);

int main(void)
{
    teste();
    return (0);
}

void teste(void)
{
    int count;

    count = 0;
bla:
    if (count <= 10)
    {
        printf("%d ~ oi\n", count);
        count++;
        goto bla;
    }
    printf("\nfinished!\n");
}
