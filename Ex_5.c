#include <stdio.h>

int main() {
    int A;
    int *B, **C, ***D;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;


    printf("Dobro: %d\n", *(*B) * 2);
    printf("Triplo: %d\n", *(*(*C)) * 3);
    printf("Quádruplo: %d\n", *(*(*(*D))) * 4);

    return 0;
}
