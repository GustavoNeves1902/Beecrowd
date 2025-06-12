#include <stdio.h>
 
int main() {
 
    int x,y,z,k;
    scanf("%d %d", &x, &y);
    
    if(x==y){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    if(x>y){
        z = 24-x;
        k = z+y;
        printf("O JOGO DUROU %d HORA(S)\n",k);
    } else { if(x<y){
        k = y-x;
        printf("O JOGO DUROU %d HORA(S)\n", k);
    } 
        
    }
        
    
 
    return 0;
}
