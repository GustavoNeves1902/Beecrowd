#include <stdio.h>
#include <math.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double a,b,c,d,r,x1,x2; 
     scanf("%lf %lf %lf", &a,&b,&c);
     d = (b*b)-(4*a*c);
     
     r = sqrt(d);
     x1 = (-b+r)/(2*a);
     x2 = (-b-r)/(2*a);
     
     if(d<0 || a==0){
         printf("Impossivel calcular\n");
     } else {
     
     printf("R1 = %.5lf\n", x1);
     printf("R2 = %.5lf\n",x2);
     }
 
    return 0;
}
