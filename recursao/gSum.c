#include <stdio.h>

int power(int n, int x) {
    if (x == 0) return 1;
   return n * power(n, x - 1);
}


double gSum(int k) {
    if (k == 0) return 1;

    double smallAns = gSum(k-1);

    return smallAns + 1.0/(power(2, k));
}


int main() {
    int k;
    scanf("%d", &k);

    printf("GeometricSum(%d) = %f\n", k, gSum(k));
    return 0;
}