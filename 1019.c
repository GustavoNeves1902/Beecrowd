#include <stdio.h>
 
int main() {
 
    int S,H,M,se,X,Y;
    scanf("%d", &S);
    
    H = S/3600;
    X = S%3600;
    M = X/60;
    Y = X%60;
    se = Y;
    
    printf("%d:%d:%d\n", H,M,se);
 
    return 0;
}
