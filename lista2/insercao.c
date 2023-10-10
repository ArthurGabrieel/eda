#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void insere_inicio(celula *le, int x) {
    celula *nova = malloc(sizeof(celula));
    
    if (nova == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        exit(1);
    }

    // Define o valor da nova célula
    nova->dado = x;

    // Define o próximo da nova célula como o início da lista atual
    nova->prox = le->prox;

    // Define o início da lista como a nova célula
    le->prox = nova;
}

int main() {
    celula* primeira = malloc(sizeof(celula));
    celula* segunda = malloc(sizeof(celula));
    celula* terceira = malloc(sizeof(celula));
    celula* nova = malloc(sizeof(celula));

    primeira->dado = 1;
    segunda->dado = 2;
    terceira->dado = 3;

    primeira->prox = segunda;
    segunda->prox = terceira;
    terceira->prox = NULL;

    printf("Antes da insercao:\n");
    printf("primeira -> %d\n", primeira->dado);
    printf("segunda  -> %d\n", segunda->dado);
    printf("terceira -> %d\n", terceira->dado);

    insere_inicio(nova, 13);

    printf("\nApós a insercao:\n");
    printf("nova -> %d\n", nova->dado);
    printf("primeira -> %d\n", primeira->dado);
    printf("segunda  -> %d\n", segunda->dado);
    printf("terceira -> %d\n", terceira->dado);

    // Certifique-se de liberar a memória alocada quando não precisar mais das células
    free(primeira);
    free(segunda);
    free(terceira);
    free(nova);

    return 0;
}
