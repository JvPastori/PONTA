#include <stdio.h>


int somaDobro(int *a, int *b) {
    
    *a = 2 * (*a);
    *b = 2 * (*b);

    
    return (*a + *b);
}

int main() {
    int valorA, valorB;

   
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

   
    int resultadoSoma = somaDobro(&valorA, &valorB);

    
    printf("Resultado da soma do dobro de A e B: %d\n", resultadoSoma);
    printf("Valor atualizado de A: %d\n", valorA);
    printf("Valor atualizado de B: %d\n", valorB);

    return 0;
}
