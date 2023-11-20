#include <stdio.h>
#include <stdlib.h>

void shell_sort(int *a, int l, int r) {
    int h = 1;

    while (h < (r - l + 1) / 3)
        h = 3 * h + 1;

    while (h >= 1) {
        for (int i = l + h; i <= r; i++) {
            for (int j = i; j >= i + h && a[j] < a[j - h]; j -= h) {
                int t = a[j];
                a[j] = a[j - h];
                a[j - h] = t;
            }
            h /= 3;
        }
    }
}


int main() {
    int *a = malloc(50050 * sizeof(int));
    int num;
    int i;

    for (i = 0; scanf("%d", &num) != EOF; i++)
        a[i] = num;

    shell_sort(a, 0, i);

    printf("%d", a[0]);

    for (int j = 1; a[j] != '\0'; j++)
        printf(" %d", a[j]);

    printf("\n");

    return 0;
}