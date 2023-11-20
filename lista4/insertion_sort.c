#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *v, int l, int r) {
    for (int i = l + 1; i < r; i++) {
        int key = v[i];
        int j = i - 1;

        while (j >= l && v[j] > key) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }
}

int main() {
    int *a = malloc(50001 * sizeof(int));
    int num;
    int i;

    for (i = 0; scanf("%d", &num) != EOF; i++)
        a[i] = num;

    insertion_sort(a, 0, i);

    printf("%d", a[0]);

    for (int j = 1; j < i; j++)
        printf(" %d", a[j]);

    printf("\n");

    free(a); // Free the allocated memory

    return 0;
}
