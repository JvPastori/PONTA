#include <stdio.h>


void ordenarValores(int *a, int *b, int *c) {
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int valor1, valor2, valor3;

    
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

   
    ordenarValores(&valor1, &valor2, &valor3);

    
    printf("Valores ordenados: %d, %d, %d\n", valor1, valor2, valor3);

    return 0;
}
