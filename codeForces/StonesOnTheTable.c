#include<stdio.h>
#include<string.h>
int main(){

int n;
scanf("%d", &n);
char stones[n+1];
scanf("%s", stones);
int count = 0;
for(int i = 0; i < n-1; i++) {
    if(stones[i] == stones[i+1]) {
        count++;
    }
}
printf("%d", count);








    return 0;
}