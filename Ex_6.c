#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846


void calc_esfera(float R, float *area, float *volume);

int main() {
    float raio, area, volume;

    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    
    calc_esfera(raio, &area, &volume);

    
    printf("Área da superfície: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}


void calc_esfera(float R, float *area, float *volume) {
    *area = 4.0 * PI * pow(R, 2);            
    *volume = (4.0 / 3.0) * PI * pow(R, 3);  
}
