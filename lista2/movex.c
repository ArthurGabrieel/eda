#include <stdio.h>

void moveX(char *text) {
    if (*text == '\0' || *text == '\n') {
        return;
    } else if (*text == 'x') {
        moveX(text + 1);
        printf("x");
    } else {
        printf("%c", *text);
        moveX(text + 1);
    }
}

int main() {
    char text[101];
    scanf("%s", text);
    moveX(text);
    printf("\n");
    return 0;
}