#include<stdio.h>
int main(){

int n,h;
scanf("%d %d",&n,&h);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int w=0;
for(int i=0;i<n;i++){
    if(arr[i]>h){
        w=w+2;
    } else {
        w=w+1;
    }
}
printf("%d",w);
return 0;
}