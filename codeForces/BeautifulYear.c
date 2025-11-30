#include<stdio.h>
int main(){

int year;
scanf("%d",&year);
int nextYear;
for (int i=1;;i++){
    nextYear=year+i;
    int a=nextYear/1000;
    int b=(nextYear/100)%10;
    int c=(nextYear/10)%10;
    int d=nextYear%10;
    if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        break;
    }
}


printf("%d",nextYear);

    return 0;
}