#include <stdio.h>
#include <stdlib.h>

#include "vetor.h"
#define MIN_INT 0xFFFFFFFF


struct vetor {
  int *dados;     // ponteiro para array de inteiros
  int length;   // comprimento
  int limit;  // tamanho máximo
};

Vetor *criarVetor(int limit) {
  Vetor *v = malloc(sizeof(Vetor));
  if(v == NULL) return NULL; // Erro na alocação
  v->dados = malloc(sizeof(int) * limit);
  if(v->dados == NULL) return NULL; // Erro na alocação
  v->length = 0;
  v->limit = limit;
  return v;
}

void liberarVetor(Vetor *v) {
  free(v->dados);
  free(v);
}

void listar(Vetor *v) {
  printf("[%d]", v->dados[0]);
   printf("[%d]", v->dados[1]);
   printf("[%d]", v->dados[2]);
   printf("[%d]", v->dados[v->length-1]);
  
}

void zerar(Vetor *v) {
  v->length = 0;
}
