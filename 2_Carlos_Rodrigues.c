#include <stdio.h>

int main() {
    int numeros[10];
    int positivos = 0, negativos = 0, multiplos = 0;
    int i;

        printf("Ola, usuario!\n");
        printf("\n");
  
    for (i = 0; i < 10; i++) {
        printf("Digite o seu %d° numero: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] > 0) {
            positivos++;
        }
        else if (numeros[i] < 0) {
            negativos++;
        }
        if (numeros[i] % 3 == 0) {
            multiplos++;
        }
    }
    printf("\nResultados:\n");
    printf("\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Multiplos de 3: %d\n", multiplos);
  
    return 0;
}
