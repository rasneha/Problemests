#include<stdio.h>
#include<math.h>
int main(){
   int A,B;
   scanf("%d %d", &A ,&B);
   double c= (double)A/B;
   printf("floor %d / %d = %.0f\n",A,B, floor(c));
   printf("ceil %d / %d = %.0f\n", A, B, ceil(c));
   float rou = round(c);
  printf("round %d / %d = %.0f\n", A, B, rou);
  return 0;
}
