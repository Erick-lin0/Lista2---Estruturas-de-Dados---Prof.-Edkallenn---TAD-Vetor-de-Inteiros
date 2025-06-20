/*
** Função : TAD Vetor de Inteiros
** Autor : José Erick e Daysila
** Data : 18/06/2025
** Observações: Arquivo de teste
*/

#include "vetor.h"
#include <stdio.h>

int main() {
  Vetor *v = criarVetor(4);
  inserirElemento(v, 5);
  inserirElemento(v, 10);
  inserirElemento(v, 20);
  inserirElemento(v, 40);
  inserirElemento(v, 80);

  imprimirVetor(v);
  removerElemento(v, 20);
  imprimirVetor(v);

  printf("Elemento na primeira posição do vetor: %d\n", consultarElemento(v, 0));
  printf("Elemento na quarta posição do vetor: %d\n", consultarElemento(v, 3));
  printf("Elemento na quinta posição do vetro: %d\n", consultarElemento(v, 4));

  liberarVetor(v);
  return 0;
}
