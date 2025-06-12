#include <stdio.h>
 
int main() {
 
    //12km/l
    //tempo gasto em horas
    //velocidade média km/h
    //calcular quantos litros
    
    int T,V,K;
    double Y;
    scanf("%d %d", &T, &V);
    
    K = T*V;
    Y = K/12.00;
    
    printf("%.3lf\n", Y);
 
    return 0;
}
