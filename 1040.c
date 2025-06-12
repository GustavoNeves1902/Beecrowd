#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a,b,c,d,m,nm;
    scanf("%lf %lf %lf %lf", &a,&b,&c,&d);
    m =((a*2)+(b*3)+(c*4)+(d*1))/10;
    
    if(m>=7.0){
        printf("Media: %.1lf\n", m);
        printf("Aluno aprovado.\n");
    } else{
        if(m<5.0){
            printf("Media: %.1lf\n",m);
            printf("Aluno reprovado.\n");
        }else {
            if(m>=5.0 || m<= 6.9){
                double e;
                printf("Media: %.1lf\n", m);
                printf("Aluno em exame.\n");
                scanf("%lf", &e);
                printf("Nota do exame: %.1lf\n", e);
                nm = (e+m)/2;
                
                if(nm>=5.0){
                    printf("Aluno aprovado.\n");
                    
                } else{
                    if(nm<4.9){
                        printf("Aluno reprovado.\n");
                    }
                    
                }
                printf("Media final: %.1lf\n", nm);
                
                
            }
        }
    }
 
    return 0;
}
