#include <stdio.h>
#include <math.h>
 
int main() {
 
    double S,X,R;
    scanf("%lf", &S);
    
    if(S>=0 && S<=400.00){
        R = 0.15*S;
        X = S + R;
        printf("Novo salario: %.2lf\n", X);
        printf("Reajuste ganho: %.2lf\n", R);
        printf("Em percentual: 15 %\n");
    } else{
        if(S>400.00 && S<=800.00){
            R = 0.12*S;
            X = S + R;
            printf("Novo salario: %.2lf\n", X);
            printf("Reajuste ganho: %.2lf\n", R);
            printf("Em percentual: 12 %\n");
        } else{
            if(S>800.00 && S<=1200.00){
                R = 0.10*S;
                X = S + R;
                printf("Novo salario: %.2lf\n", X);
                printf("Reajuste ganho: %.2lf\n", R);
                printf("Em percentual: 10 %\n");
    } else{
            if(S>1200.00 && S<=2000.00){
                R = 0.07*S;
                X = S + R;
                printf("Novo salario: %.2lf\n", X);
                printf("Reajuste ganho: %.2lf\n", R);
                printf("Em percentual: 7 %\n");
            } else{
                    if(S>2000){
                        R = 0.04*S;
                        X = S + R;
                        printf("Novo salario: %.2lf\n", X);
                        printf("Reajuste ganho: %.2lf\n", R);
                        printf("Em percentual: 4 %\n");
    }
        }
    }
        }
        
    }
 
    return 0;
}
