#include<stdio.h>
int main() {
    long long n;
    scanf("%lld", &n);
    int c=0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            c++;
        }
        n = n / 10;
    }
    if (c==4 || c==7) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}