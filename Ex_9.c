#include <stdio.h>

void encontrarMaiorElemento(int array[], int tamanho, int *maior, int *ocorrencias) {
    if (tamanho <= 0) {
        printf("O array está vazio.\n");
        return;
    }

    *maior = array[0]; 
    *ocorrencias = 1;   
    for (int i = 1; i < tamanho; i++) {
        if (array[i] > *maior) {
            *maior = array[i]; 
            *ocorrencias = 1;    
        } else if (array[i] == *maior) {
            (*ocorrencias)++;  
        }
    }
}

int main() {
    int meuArray[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);

    int maiorElemento, numOcorrencias;

   
    encontrarMaiorElemento(meuArray, tamanho, &maiorElemento, &numOcorrencias);

    
    printf("Maior elemento: %d\n", maiorElemento);
    printf("Número de ocorrências: %d\n", numOcorrencias);

    return 0;
}
