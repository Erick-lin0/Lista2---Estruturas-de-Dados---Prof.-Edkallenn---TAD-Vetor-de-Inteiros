/*
** Função : TAD Vetor de Inteiros
** Autor : Erick e Daysila
** Data : 18/06/2025
** Observações: Implementação
*/

#include "vetor.h"
#include <stdio.h>
#include <stdlib.h>

Vetor *criarVetor(int capacidade_i) {
  Vetor *v = (Vetor *)malloc(sizeof(Vetor));
  if (v == NULL)
    return NULL;

  v->dados = (int *)malloc(sizeof(int) * capacidade_i);
  if (v->dados == NULL) {
    free(v);
    return NULL;
  }

  v->tamanho = 0;
  v->capacidade = capacidade_i;
  return v;
}

void inserirElemento(Vetor *v, int elemento) {
  if (v->tamanho == v->capacidade) {
    v->capacidade *= 2;
    v->dados = realloc(v->dados, sizeof(int) * v->capacidade);
  }
  v->dados[v->tamanho++] = elemento;
}

void removerElemento(Vetor *v, int elemento) {
  int i, j;
  for (i = 0; i < v->tamanho; i++) {
    if (v->dados[i] == elemento) {
      for (j = i; j < v->tamanho - 1; j++) {
        v->dados[j] = v->dados[j + 1];
      }
      v->tamanho--;
      return;
    }
  }
  printf("Elemento %d não encontrado.\n", elemento);
}

int consultarElemento(Vetor *v, int posicao) {
  if (posicao < 0 || posicao >= v->tamanho) {
    printf("Posição inválida.\n");
    return -1;
  }
  return v->dados[posicao];
}

void imprimirVetor(Vetor *v) {
  printf("Vetor: ");
  for (int i = 0; i < v->tamanho; i++) {
    printf("%d ", v->dados[i]);
  }
  printf("\n");
}

void liberarVetor(Vetor *v) {
  if (v != NULL) {
    free(v->dados);
    free(v);
  }
}
