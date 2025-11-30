#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    double sum = 0, x;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &x);
        sum += x;
       }

    double result = sum / n;
    printf("%lf\n", result);
    return 0;
}
