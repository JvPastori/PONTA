#include <stdio.h>

int main() {
  
    float meuArray[10];

   
    for (int i = 0; i < 10; i++) {
        printf("Endereço do elemento %d: %p\n", i, (void*)&meuArray[i]);
    }

    return 0;
}
