#include <stdio.h>
 
int main() {
 
    int a,b,c,d;
    
    scanf("%d %d %d %d", &a,&b,&c,&d);
    
    int DIFERENCA = (a*b - c*d);
    
    printf("DIFERENCA = %d\n", DIFERENCA);
 
    return 0;
}
