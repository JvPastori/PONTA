#include <stdio.h>


void preencherArray(int *array, int tamanho, int valor) {
    int *ponteiro = array;  


    while (ponteiro < array + tamanho) {
        *ponteiro = valor;  
        ponteiro++;         
}

int main() {
    int tamanho = 5;
    int meuArray[tamanho];

    int valorParaPreencher = 42;


    preencherArray(meuArray, tamanho, valorParaPreencher);

   
    printf("Array preenchido com o valor %d:\n", valorParaPreencher);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", meuArray[i]);
    }

    return 0;
}
