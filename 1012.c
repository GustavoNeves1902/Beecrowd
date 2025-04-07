#include <stdio.h>
#define PI 3.14159

int main() {
    
    double a,b,c;
    
    scanf("%lf %lf %lf", &a,&b,&c);
    
    double at = (a*c)/2;
    double ac = PI*c*c;
    double atr = ((a+b)*c)/2;
    double aq = b*b;
    double ar = a*b;
    
    printf("TRIANGULO: %.3lf\n", at);
    printf("CIRCULO: %.3lf\n", ac);
    printf("TRAPEZIO: %.3lf\n", atr);
    printf("QUADRADO: %.3lf\n", aq);
    printf("RETANGULO: %.3lf\n", ar);
 
    return 0;
}
