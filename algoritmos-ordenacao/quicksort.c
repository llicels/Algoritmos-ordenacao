#include <stdlib.h>
#include <stdio.h>
#include "comuns.h"

int *sortearNumeros(int tamanhoArray);
void printfuf(int *numeros, int arraySize); 

int compare(const void *p, const void *q){
  // Busca o valor numérico dos ponteiros
  int v1 = *(const int *)p;
  int v2 = *(const int *)q;

  if (v1 < v2) {
    return -1;
  }
  else if (v1 > v2) {
    return 1;
  }
  else {
    return 0;
  }
}

void quicksort(int tamanhoArray){
    int *sorteioA = sortearNumeros(tamanhoArray);

    qsort(sorteioA, tamanhoArray, sizeof(int), compare);

    printfuf(sorteioA, tamanhoArray);

    free(sorteioA);
}

int main(){
    int arraySize;
    printf("Informe o tamanho do array digitado com um inteiro: ");
    scanf("%d", &arraySize);

    quicksort(arraySize);
    return 0;
}