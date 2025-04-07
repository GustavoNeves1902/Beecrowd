#include <stdio.h>
 
int main() {
 
    int x;
    double y;
    
    scanf("%d %lf", &x,&y);
    
    double cons = x/y;
    
    printf("%.3lf km/l\n", cons);
 
    return 0;
}
