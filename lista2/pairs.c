#include <stdio.h>

int numOfPairs(char input[]) {
    if (input[0] == '\0') return;
    
    numOfPairs(input + 1);
}

int main() {

    char input[200];
    scanf("%s", input);

    numOfPairs(input);
    printf("\n");
    return 0;
}