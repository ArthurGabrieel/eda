#include <stdio.h>

int power(int n, int x) {
    if (x == 0) return 1;
   return n * power(n, x - 1);
}


int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    printf("Power(%d) = %d\n", n, power(n, x));
    return 0;
}