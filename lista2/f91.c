#include <stdio.h>

int f91(int n) {
    if (n > 100) {
        return n - 10;
    } else {
        return f91(f91(n + 11));
    }
}

int main () {

    int n[250000];
    int i;

    for (i = 0; i < 250000; i++) {
        scanf("%d", &n[i]);
        if (n[i] == 0) break;
    }

    for (int j = 0; j < i; j++) {
        printf("f91(%d) = %d\n", n[j], f91(n[j]));
    }
    
    return 0;
}