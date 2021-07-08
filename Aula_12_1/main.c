#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    printf("Digite o valor de X!\n");
    scanf("%d", &x);

    printf("Digite o valor de Y!\n");
    scanf("%d", &y);

    z = x > y? x : y;

    printf("O resultado maior e %d!",z);

}
