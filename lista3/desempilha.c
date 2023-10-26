#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int desempilha(celula *p, int *y) {
    celula *q;
    if (p->prox == NULL) return 0;
    q = p->prox;
    *y = q->dado;
    p->prox = q->prox;
    free(q);
    return 1;
}

