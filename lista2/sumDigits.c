#include <stdio.h>

int sum(long int n) {
    if (n == 0) return 0;
    return sum(n/10) + n%10;
}

int main() {
    long int n;
    scanf("%ld", &n);
    printf("%d\n", sum(n));
    return 0;
}