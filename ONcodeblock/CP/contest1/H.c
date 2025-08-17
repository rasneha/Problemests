#include <stdio.h>

int main() {
    char X;
    scanf("%c", &X);
    if (X >= 97 && X <= 122) {
        X = X - 32;
        printf("%c", X);
    }
    else {
        X = X + 32;
        printf("%c", X);
    }
     return 0;
}
