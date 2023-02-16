#include<stdio.h>
int main()
{
    double A,B,avg;
    scanf("%lf%lf",&A,&B);
    avg=((3.5*A)+(7.5*B))/(3.5+7.5);
    printf("MEDIA = %0.5lf\n",avg);
    return 0;
}
