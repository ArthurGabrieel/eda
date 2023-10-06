#include <stdio.h>

int isSorted(int a[], int n) {
    if (n == 0 || n == 1) return 1;
    if (a[0] > a[1]) return 0;

    return isSorted(a + 1, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (isSorted(a, n) == 1) {
        printf("Is Sorted!\n");
    } else {
        printf("Is Not Sorted!\n");
    }
    return 0;
}
