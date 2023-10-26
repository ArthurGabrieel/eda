#include <stdio.h>
#include <stdlib.h>

typedef struct celula { 
    int dado;
    struct celula *prox;
} celula;

int desenfileira (celula *f, int *y){
  celula *p = f->prox;

  if (p == NULL) return 0;

  *y = p->dado;
  f->prox = p->prox;
  free (p);

  return 1;
}