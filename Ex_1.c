#include <stdio.h>


void rearranjarValores(int *a, int *b) {
    if (*a < *b) {
    
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

   
    rearranjarValores(&valor1, &valor2);

 
    printf("Valor 1: %d\n", valor1);
    printf("Valor 2: %d\n", valor2);

    return 0;
}
