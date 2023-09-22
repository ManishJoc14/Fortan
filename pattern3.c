/*
    H 
    H E 
    H E L 
    H E L L
    H E L L O
    H E L L 
    H E L
    H E 
    H
*/

#include <stdio.h>
#include <string.h>

int main() {
    int i, j;
    char str[] = "HELLO";

    int length = strlen(str);

    for (i = 0; i < length * 2 - 1; i++) {
        int count = (i < length) ? i + 1 : length * 2 - 1 - i;

        for (j = 0; j < count; j++) {
            printf("%c ", str[j]);
        }

        printf("\n");
    }

    return 0;
}
