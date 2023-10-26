#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
} fila;

int enfileira(fila *f, int x) {
    if (f->u == f->N) {
        int novoTamanho = f->N * 2;
        int *novoDados = (int *)malloc(novoTamanho * sizeof(int));

        for (int i = 0; i < f->N; i++) {
            novoDados[i] = f->dados[i];
        }

        free(f->dados);
        f->dados = novoDados;
        f->p = 0;
        f->u = f->N;
        f->N = novoTamanho;
    }

    f->dados[f->u] = x;
    f->u++;

    return 1;
}

int main() {
    fila f;
    f.N = 2;
    f.p = 0;
    f.u = 0;
    f.dados = (int *)malloc(f.N * sizeof(int));

    enfileira(&f, 1);
    enfileira(&f, 2);
    enfileira(&f, 3);
    enfileira(&f, 4);

    for (int i = f.p; i != f.u; i = (i + 1) % f.N) {
        printf("%d ", f.dados[i]);
    }

    free(f.dados);
    return 0;
}
