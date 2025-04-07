#include <stdio.h>
 
int main() {
 
    double A,B,C;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    float notaA = A*2.0;
    float notaB = B*3.0;
    float notaC = C*5.0;
    
    printf("MEDIA = %.1lf\n",(notaA+notaB+notaC)/10);
    
 
    return 0;
}
