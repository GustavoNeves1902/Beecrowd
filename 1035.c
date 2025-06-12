#include <stdio.h>
#include <math.h>
 
int main() {
 
    int A,B,C,D,X,Y,Z,W;
    
    scanf("%d %d %d %d", &A,&B,&C,&D);
    
    X = A+B;
    Y = C+D;
    Z = A%2;
    
    if(B>C && D>A && Y>X && C>=0 && D>=0 && Z==0){
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }
 
    return 0;
}
