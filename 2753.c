#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<26;i++)
    {
       printf("%d",97+i);
       printf(" e ");
       char c=97+i;
       printf("%c",c);
       printf("\n");
    }
    return 0;
}
