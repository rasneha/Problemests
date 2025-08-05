#include<stdio.h>

int main() {
    int x;
    scanf("%d",& x);
    int c=x/5;
    int j=1;
    float f = x/5.0;
    if(x<5){
   printf("%d", j);
    }
    else if(x%5==0) {
        printf("%d", c);
    }
    else {
        printf("%.0f", f+1);
    }
    return 0;
}