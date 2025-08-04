#include <stdio.h>
 
int main(){
    
      int x,y;
      float t;
     scanf("%d ",&x);
     scanf("%d",&y);
      float p;
       if (x==1){
          p=4.00;
      }
      else if(x==2){
          p=4.50;
      }
      else if(x==3){
          p=5.00;
      }
      else if (x==4){
          p=2.00;
      }
      else if (x==5){
          p=1.50;
      }
      else {
          printf("invalid");
      }
      t =p*y;
      printf("Total: R$ %.2f\n",t);
 
    return 0;
}