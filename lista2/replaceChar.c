#include <stdio.h>

void replaceChar(char input[]) {
    if (input[0] == '\0') return;
    if(input[0] == 'x') input[0] = 'y';
    
    replaceChar(input + 1);
}

int main() {

    char input[100];
    scanf("%s", input);

    replaceChar(input);
    printf("%s\n", input);

    return 0;
}