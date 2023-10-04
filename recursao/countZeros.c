#include <stdio.h>

int countZeros(int n) {
    if (n == 0) return 0;

    int smallAns = countZeros(n/10);

    if (n % 10 == 0) return smallAns + 1;
    else return smallAns;
}


int main() {
    int n;
    scanf("%d", &n);

    printf("CountZeros(%d) = %d\n", n, countZeros(n));
    return 0;
}