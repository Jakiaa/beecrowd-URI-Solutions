#include<stdio.h>
int main()
{
    double A,B,C, r1,r2,r3,r4,r5;
    scanf("%lf%lf%lf",&A,&B,&C);
    //Triangle
    r1=(1.0/2)*A*C;
    r2=3.14159*C*C; //Circle
    r3=((A+B)*C)/2;
    r4=B*B;
    r5=A*B;
    printf("TRIANGULO: %.3lf\n",r1);
    printf("CIRCULO: %.3lf\n",r2);
    printf("TRAPEZIO: %.3lf\n",r3);
    printf("QUADRADO: %.3lf\n",r4);
    printf("RETANGULO: %.3lf\n",r5);
    return 0;
}
