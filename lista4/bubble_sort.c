#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *a, int l, int r) {
    for (int count = 1; count < r; count++) {
        int flag = 0;
        for (int j = l; j < r - 1; j++) {
            //swap
            if (a[j] > a[j+1]) {
                int aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
                flag = 1;
            }
        }
        if (flag == 0) break; // is already sorted
    }
}

int main() {
    int *a = malloc(1001 * sizeof(int));
    int num;
    int i;

    for (i = 0; scanf("%d", &num) != EOF; i++)
        a[i] = num;

    bubble_sort(a, 0, i);

    printf("%d", a[0]);

    for (int j = 1; a[j] != '\0'; j++)
        printf(" %d", a[j]);

    printf("\n");

    return 0;
}