#include <stdio.h>
 
int main() {
 
   int C,Q;
   double T;
   scanf("%d %d", &C, &Q);
   
   if(C==1) {
       T = Q*4.00; 
       printf("Total: R$ %.2lf\n", T);
   } else {
       if(C==2){
           T = Q*4.50;
           printf("Total: R$ %.2lf\n", T);
       } else{
           if(C==3){
             T = Q*5.00;
           printf("Total: R$ %.2lf\n", T);  
           } else {
               if(C==4){
                   T = Q*2.00;
           printf("Total: R$ %.2lf\n", T);
               } else{
                   if(C==5){
                       T = Q*1.50;
           printf("Total: R$ %.2lf\n", T);
                   }
               }
           }
       }
   }
 
    return 0;
}
