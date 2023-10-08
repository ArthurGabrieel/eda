#include <stdio.h>

int countSize(char input[]) {
    if (input[0] == '\0') return 0;
    return 1 + countSize(input + 1);
}

int main() {

    char str[101];
    char sub[101];
    scanf("%s", str);
    scanf("%s", sub);

    int strSize = countSize(str);
    int subSize = countSize(sub);

    if (strSize > subSize) printf("%d\n", strSize);
    else printf("%d\n", subSize);

    return 0;
}