#include <stdio.h>
 
int main() {
 
    char nome[20];
    double salf, vendas;
    
    scanf("%s %lf %lf",&nome, &salf, &vendas);
    
   double total = (vendas*0.15) + salf;
    
    printf("TOTAL = R$ %.2lf\n", total);
    
 
    return 0;
}
