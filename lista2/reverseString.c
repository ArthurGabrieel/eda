#include <stdio.h>

void reverseString(char input[]) {
    if (input[0] == '\0') return;
    
    reverseString(input + 1);
    printf("%c", input[0]);
}

int main() {

    char input[500];
    scanf("%s", input);

    reverseString(input);
    printf("\n");
    return 0;
}