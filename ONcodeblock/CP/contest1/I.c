#include <stdio.h>

int main() {
    char X;
    scanf("%c", &X);
    if (X >= 48 && X <= 57 ) {
        printf("IS DIGIT\n");
    }
    else if (X >= 65 && X <= 90) {
        printf("ALPHA\nIS CAPITAL");
    }
    else if (X >= 97 && X <= 122) {
        printf("ALPHA\nIS SMALL");
    }
    return 0;
}


