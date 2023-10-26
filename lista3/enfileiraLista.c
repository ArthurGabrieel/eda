#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *enfileira(celula *f, int x) {
    celula *novo = malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = NULL;

    if (f == NULL) {
        novo->prox = novo; // Se a fila estiver vazia, o novo elemento aponta para ele mesmo.
        return novo;
    }

    // Conectar o novo elemento ao último elemento da fila (que aponta de volta para o primeiro).
    novo->prox = f->prox;
    f->prox = novo;

    return novo;
}
