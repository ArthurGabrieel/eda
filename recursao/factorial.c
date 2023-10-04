#include <stdio.h>

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1); // fact(n) = n * fact(n - 1
}


int main() {

    int n;
    scanf("%d", &n);

    printf("Factorial(%d) = %d\n", n, fact(n));
    return 0;
}