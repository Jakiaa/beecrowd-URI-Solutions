#include<stdio.h>
int main()
{
    char name[50];
    double salary, renu,total;
    scanf("%s%lf%lf",name,&salary,&renu);
    total=salary+(.15*renu);
    printf("TOTAL = R$ %0.2lf\n",total);
    return 0;
}
