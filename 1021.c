#include <stdio.h>
 
int main() {
 
    int a,b;
    int x,x1,y,y1,z,z1,w,w1,r,r1,t,t1;
    int c,d,d1,e,e1,f,f1,g,g1,h;
    
    scanf("%d.%d", &a, &b);
    
    x = a/100;
    x1 = a%100;
    y = x1/50;
    y1 = x1%50;
    z = y1/20;
    z1 = y1%20;
    w = z1/10;
    w1 = z1%10;
    r = w1/5;
    r1 = w1%5;
    t = r1/2;
    t1 = r1%2;
    c = t1/1;
    
    d = b/50;
    d1 = b%50;
    e = d1/25;
    e1 = d1%25;
    f = e1/10;
    f1 = e1%10;
    g = f1/5;
    g1 = f1%5;
    h = g1/1;
   
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", x);
    printf("%d nota(s) de R$ 50.00\n", y);
    printf("%d nota(s) de R$ 20.00\n", z);
    printf("%d nota(s) de R$ 10.00\n", w);
    printf("%d nota(s) de R$ 5.00\n", r);
    printf("%d nota(s) de R$ 2.00\n", t);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c);
    printf("%d moeda(s) de R$ 0.50\n", d);
    printf("%d moeda(s) de R$ 0.25\n", e);
    printf("%d moeda(s) de R$ 0.10\n", f);
    printf("%d moeda(s) de R$ 0.05\n", g);
    printf("%d moeda(s) de R$ 0.01\n", h);
    
 
    return 0;
}
