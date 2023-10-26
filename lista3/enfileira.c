#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
} fila;

void enfileira(fila *f, int x) {
    if (f->u + 1 == f->p || (f->u == f->N && f->p == 0)) {
        int *newArr = (int *)malloc(2 * f->N * sizeof(int));

        int j = 0;
        for (int i = f->p; i < f->N; i++) {
            newArr[j] = f->dados[i];
            j++;
        }
        for (int i = 0; i < f->p; i++) {
            newArr[j] = f->dados[i];
            j++;
        }
        f->p = 0;
        f->u = f->N;
        f->N = 2 * f->N;
        free(f->dados);
        f->dados = newArr;
    }
    f->dados[f->u] = x;
    f->u = (f->u + 1) % f->N;

    if (f->p == -1) {
        f->p = 0;
    }
}
