#include <stdio.h>

void medidas_retangulo(double *lado1, double *lado2) {
    // Verifica se os lados são válidos (não negativos)
    if (*lado1 <= 0 || *lado2 <= 0) {
        printf("Os lados do retângulo devem ser positivos.\n");
        return;
    }

    // Calcula área e perímetro
    double area = (*lado1) * (*lado2);
    double perimetro = 2 * ((*lado1) + (*lado2));

    // Altera os conteúdos dos parâmetros com os valores calculados
    *lado1 = area;
    *lado2 = perimetro;
}

int main() {
    double comprimento, largura;

    // Solicita ao usuário para fornecer as medidas do retângulo
    printf("Digite o comprimento do retângulo: ");
    scanf("%lf", &comprimento);

    printf("Digite a largura do retângulo: ");
    scanf("%lf", &largura);

    // Chama a sub-rotina para calcular a área e o perímetro
    medidas_retangulo(&comprimento, &largura);

    // Exibe os resultados
    printf("Área do retângulo: %.2lf\n", comprimento);
    printf("Perímetro do retângulo: %.2lf\n", largura);

    return 0;
}
