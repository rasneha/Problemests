#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[2];
    int count=0;
    for(int i=0;i<n;i++){
    scanf("%d %d",&a[0],&a[1]);
    int cap= a[1]-a[0];
    if(cap>=2){
        count++;
    }
}
    printf("%d",count);
    return 0;
}