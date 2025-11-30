#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int arr[n];
int c=0;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    c+=arr[i];
}
if(c==0){
    printf("EASY");
}
else{
    printf("HARD");
}

    return 0;
}