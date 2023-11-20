#include <stdio.h>
#include <stdlib.h>

typedef struct dado {
    int valor, indice;
} dados;

void shell_sort(dados *v, int l, int r) {
    int h = 1;

    for (; h <= (r - l) / 9; h = 3 * h + 1);

    for (; h > 0; h /= 3)
        for (int i = l + h; i <= (r - l); i++)
            for (int j = i; j >= l + h && v[j].valor < v[j - h].valor; j -= h) {
                dados t = v[j];
                v[j] = v[j - h];
                v[j - h] = t;
            }
}

int busca_binaria(dados *v, int n, int dado) {
    int l = 0;
    int h = n;

    while (h > l) {
        int meio = l + (h - l) / 2;

        if (dado == v[meio].valor)
            return meio;
        else if (dado < v[meio].valor)
            h = meio;
        else
            l = meio + 1;
    }

    return -1;
}

int main() {
    int n, m, dado;

    scanf("%d %d", &n, &m);

    dados v[n];

    // Lendo os dados do vetor
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i].valor);
        v[i].indice = i;
    }

    // Ordenando o vetor
    shell_sort(v, 0, n);

    // Lendo os dados de busca
    while (m--) {
        scanf("%d", &dado);

        int r = busca_binaria(v, n, dado);

        printf("%d\n", r != -1 ? v[r].indice : r);
    }

    return 0;
}