/*
** Função : TAD Vetor de Inteiros
** Autor : Erick e Daysila
** Data : 18/06/2025
** Observações: Arquivo de teste
*/

#include "vetor.h"
#include <stdio.h>

int main() {
  Vetor *v = criarVetor(4);

  inserirElemento(v, 10);
  inserirElemento(v, 20);
  inserirElemento(v, 30);
  inserirElemento(v, 40);
  inserirElemento(v, 50);

  imprimirVetor(v);

  removerElemento(v, 20);
  imprimirVetor(v);

  printf("Elemento na posição 1: %d\n", consultarElemento(v, 0));
  printf("Elemento na posição 4: %d\n", consultarElemento(v, 3));
  printf("Elemento na posição 5: %d\n", consultarElemento(v, 4));

  liberarVetor(v);

  return 0;
}
