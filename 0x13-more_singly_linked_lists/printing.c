#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y = 5;
    int *x = &y;
    int *z = malloc(sizeof(int));
    printf("%d/n", x - y);
    x = malloc(sizeof(int));
    printf("%d\n", x - y);

    free(x);
    free(z);
    printf("%d", x - y);
    //printf("sayed");
    return 0;
}