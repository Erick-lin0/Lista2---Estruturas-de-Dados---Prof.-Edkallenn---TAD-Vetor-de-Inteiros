/*
** Função : TAD Vetor de Inteiros
** Autor : Erick e Daysila
** Data : 18/06/2025
** Observações: Interface
*/

#ifndef VETOR_H
#define VETOR_H

typedef struct {
  int *dados;
  int tamanho;
  int capacidade;
  int i;
} Vetor;

Vetor *criarVetor(int capacidade_inicial);
void inserirElemento(Vetor *v, int elemento);
void removerElemento(Vetor *v, int elemento);
int consultarElemento(Vetor *v, int posicao);
void imprimirVetor(Vetor *v);
void liberarVetor(Vetor *v);

#endif
