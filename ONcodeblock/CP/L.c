#include<stdio.h>
int main(){
    int A,B,C;
    char S, Q;
    scanf("%d %c %d %c %d" ,&A ,&S ,&B ,&Q ,&C);

    if(S==43 ){
       if(A+B==C){
       printf("Yes");
        }
       else{
        printf("%d" , A+B);
        }
    }

    if(S==45 ){
       if(A-B==C){
       printf("Yes");
       }
       else {
        printf("%d" , A-B);
       }
    }
    if(S==42 ){
       if(A*B==C){
       printf("Yes");
       }
       else {
        printf("%d" , A*B);
        }
    }

    return 0;
}
