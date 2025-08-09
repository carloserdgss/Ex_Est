#include <stdio.h>

int main(){
  float matriz[3][3];
  float somar[3] = {0};
  int i, j;

  for(i=0; i<3; i++){
    printf("====================================================\n");
    printf("Digite o valor da sua venda do %d° setor (3 setores)", i+1);
    printf("\n");
      
    for(j=0; j<3; j++){
      printf("\nValor da %d° regiao:", j+1);
      scanf("%f", &matriz[i][j]);

      somar[i] += matriz[i][j]; 
    } 
  }
  printf("=====================================\n");
   printf("\nO valor total dos setores eh de\n");
  for (i = 0; i < 3; i++) {
    printf("\nSetor %d: %.2f\n", i + 1, somar[i]);
    }
    return 0;
  }
