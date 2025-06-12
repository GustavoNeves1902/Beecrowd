#include <stdio.h>
 
int main() {
 
    double a,b,c,ar;
    scanf("%lf %lf %lf", &a, &b, &c);
    double p = a+b+c;
    
    if(a==b && b==c){
        printf("Perimetro = %.1lf\n",p);
        }else {
            if (a>b && a>c && c+b>a){
                printf("Perimetro = %.1lf\n", p);
        
                     }else {
                        if(b>a && b>c && a+c>b){
                            printf("Perimetro = %.1lf\n", p);
                        }else {
                            if(c>a && c>b && a+b>c){
                                printf("Perimetro = %.1lf\n", p);
                            } else{
                                ar = ((a+b)*c)/2;
                                printf("Area = %.1lf\n", ar);
            }
        }
    }
    }
 
    return 0;
}
