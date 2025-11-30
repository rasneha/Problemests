#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int tram[n*2];
for(int i=0;i<n*2;i++){
    scanf("%d",&tram[i]);
}
int sit=0;
int max=0;
for(int i=0;i<n*2;i++){
    if(i%2==0||i==0){
        sit=sit-tram[i];
    } else {
        sit=sit+tram[i];
    }
    if(sit>max){
        max=sit;
    }
}

printf("%d",max);
    return 0;
}