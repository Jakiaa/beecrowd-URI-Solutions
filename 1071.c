#include<stdio.h>
int main()
{
    int x,y,i;
    int sum=0;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        int temp;
        temp=x;
        x=y;
        y=temp;
    }
    else
    {
        x=x;
        y=y;
    }
    for(i=x+1;i<y;i++){
        if(i%2!=0){
           sum=sum+i;
        }
    }
    printf("%d\n",sum);
}

