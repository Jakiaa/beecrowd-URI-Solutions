#include<stdio.h>
int main()
{
    int n1,n2;
    float n3,salary;
    scanf("%d%d%f",&n1,&n2,&n3);
    salary=n2*n3;
    printf("NUMBER = %d\n",n1);
    printf("SALARY = U$ %0.2f\n",salary);
    return 0;
}
