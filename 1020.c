#include <stdio.h>
 
int main() {
 
    int I,A,M,D,X,Y;
    scanf("%d", &I);
    
    A = I/365;
    X = I%365;
    M = X/30;
    Y = X%30;
    
    printf("%d ano(s)\n",A);
    printf("%d mes(es)\n",M);
    printf("%d dia(s)\n",Y);
    
 
    return 0;
}
