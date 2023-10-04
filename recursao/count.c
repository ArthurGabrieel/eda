#include <stdio.h>

int count(int n) {
    if (n == 0) return 0;
    return count(n/10) + 1;
}


int main() {
    int n;
    scanf("%d", &n);

    printf("Count(%d) = %d\n", n, count(n));
    return 0;
}