#include<stdio.h>
 
int main() {
    int n;
   int co=0;
    scanf("%d", &n);
    int sol[3];
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &sol[0], &sol[1], &sol[2]);
        int count = 0;
        for (int j = 0; j < 3; j++) {
            if (sol[j] == 1) {
                count++;
            }
            
        }

        if (count >= 2) {
            co++ ;
        }
    }

    printf("%d\n", co);
    return 0;
}