#include <stdio.h>
#include <conio.h>
int main(void)
{
    int matriz[5][5], i, j;

    printf("\nDigite valor para os elementos da matriz\n\n");

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }

    printf("a");

    getch();
    return (0);
}
