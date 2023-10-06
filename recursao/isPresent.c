#include <stdio.h>

int isPresent(int a[], int n, int x) {
    if (n == 0) return 0;
    if (a[0] == x) return 1;

    return isPresent(a + 1, n - 1, x);
}

int main() {
    int n, x;
    scanf("%d", &n);
    scanf("%d", &x);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (isPresent(a, n, x) == 1) {
        printf("Is Present!\n");
    } else {
        printf("Is Not Present!\n");
    }
    return 0;
}
