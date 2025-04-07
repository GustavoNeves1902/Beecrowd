#include <stdio.h>
 
int main() {
 
    int cod1, num1,cod2,num2;
    double v1,v2;
    
    scanf("%d %d %lf", &cod1, &num1, &v1);
    scanf("%d %d %lf", &cod2, &num2, &v2);
    
    double total = num1*v1 + num2*v2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}
