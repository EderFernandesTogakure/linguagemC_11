#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Digite o valor de X!\n");
    scanf("%d", &x);

    printf("Digite o valor de Y!\n");
    scanf("%d", &y);

    x > y?printf("X = %d e maior!",x):printf("Y = %d e maior!",y);
}
