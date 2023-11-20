#include <stdio.h>
#include <stdlib.h>

void selection_sort(int *v, int l, int r) {
    int smallest;
    for (int i = l; i < r; i++) {
        smallest = i;

        for (int j = i + 1; j < r; j++) {
            //store the smallest index
            if (v[smallest] > v[j]) smallest = j;
        }

        //swap
        if (i != smallest) {
            int aux = v[i];
            v[i] = v[smallest];
            v[smallest] = aux;
        }
    }
}

int main() {
    int *a = malloc(1001 * sizeof(int));
    int num;
    int i;

    for (i = 0; scanf("%d", &num) != EOF; i++)
        a[i] = num;

    selection_sort(a, 0, i);

    printf("%d", a[0]);

    for (int j = 1; a[j] != '\0'; j++)
        printf(" %d", a[j]);

    printf("\n");

    return 0;
}