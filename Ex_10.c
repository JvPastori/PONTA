#include <stdio.h>


int somarArrays(const int *array1, const int *array2, int tamanho, int *resultado) {
    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 0;
    }

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = array1[i] + array2[i];
    }

    return 1;  
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int tamanho = sizeof(array1) / sizeof(array1[0]);

    int resultado[tamanho];

   
    if (somarArrays(array1, array2, tamanho, resultado)) {
        // Exibe o resultado da soma
        printf("Resultado da soma:\n");
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", resultado[i]);
        }
        printf("\n");
    } else {
        printf("Os tamanhos dos arrays são diferentes.\n");
    }

    return 0;
}
