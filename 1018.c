#include <stdio.h>
 
int main() {
    
    int V,c,ci,vi,de,cin,doi,u,A,B,C,D,E,F,G;
    scanf("%d", &V);
    
    c = V/100; 
    A = V%100; 
    ci = A/50;
    B = A%50; 
    vi = B/20; 
    C = B%20; 
    de = C/10; 
    D = C%10; 
    cin = D/5; 
    E = D%5; 
    doi = E/2;
    F = E%2;
    u = F/1;
    
    printf("%d\n", V);
    printf("%d nota(s) de R$ 100,00\n",c );
    printf("%d nota(s) de R$ 50,00\n",ci );
    printf("%d nota(s) de R$ 20,00\n",vi );
    printf("%d nota(s) de R$ 10,00\n",de );
    printf("%d nota(s) de R$ 5,00\n",cin );
    printf("%d nota(s) de R$ 2,00\n",doi );
    printf("%d nota(s) de R$ 1,00\n",u );
    
    
    
    return 0;
}
