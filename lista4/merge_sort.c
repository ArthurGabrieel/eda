#include <stdio.h>
#include <stdlib.h> 

void merge(int *v, int l, int m, int r) {
    int i = l;
    int j = m + 1;

    int *aux = malloc(sizeof(int) * (r - l + 1));

    // Índice do vetor auxiliar
    int k = 0;

    // Copiando valores de forma ordenada no novo vetor
    while (i <= m && j <= r)
        if (v[i] <= v[j])
            aux[k++] = v[i++];
        else
            aux[k++] = v[j++];

    // Terminando de fazer a cópia dos valores, se houver
    while (i <= m)
        aux[k++] = v[i++];

    while (j <= r)
        aux[k++] = v[j++];

    // Reiniciando o índice
    k = 0;

    // Copiando os valores para o vetor principal
    for (i = l; i <= r; i++)
        v[i] = aux[k++];

    free(aux);
}

void mergeSort(int *v, int l, int r) {
    if (l >= r)
        return;
    int meio = (r + l) / 2;

    mergeSort(v, l, meio);
    mergeSort(v, meio + 1, r);
    merge(v, l, meio, r);
}

int main() {
    int n;
    scanf("%d", &n);

    int *v = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    mergeSort(v, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);

    return 0;
}
