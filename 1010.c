#include<stdio.h>
int main()
{
    int c1, u1,c2,u2;
    double p1,p2,ans;
    scanf("%d%d%lf",&c1,&u1,&p1);
    ans=u1*p1;
    scanf("%d%d%lf",&c2,&u2,&p2);
    ans+=u2*p2;
    printf("VALOR A PAGAR: R$ %0.2lf\n",ans);
    return 0;
}

