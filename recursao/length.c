#include <stdio.h>

int length(char input[]) {
    if (input[0] == '\0') return 0;
    return 1 + length(input + 1);
}

int main() {

    char input[100];
    scanf("%s", input);
    printf("Length: %d\n", length(input));

    return 0;
}