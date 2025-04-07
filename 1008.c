#include <stdio.h>
 
int main() {
 
    int num,horas;
    float salh;
    
    scanf("%d %d %f", &num, &horas, &salh);
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n",salh*horas);
 
    return 0;
}
