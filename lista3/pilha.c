#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int empilha(celula *p, int x) {
    celula *nova;
    nova = malloc(sizeof(celula));
    if (nova == NULL) return 0;
    nova->dado = x;
    nova->prox = p->prox;
    p->prox = nova;
    return 1;
}

int desempilha(celula *p, int *y) {
    celula *q;
    if (p->prox == NULL) return 0;
    q = p->prox;
    *y = q->dado;
    p->prox = q->prox;
    free(q);
    return 1;
}

