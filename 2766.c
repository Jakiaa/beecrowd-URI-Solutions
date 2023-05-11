#include<stdio.h>
int main(int argc, char **argv)
{
    char name[50];
    int i;
    for(i=1;i<=10;i++){
      scanf("%s",name);
      if(i==3)
            puts(name);
      else if(i==7)
            puts(name);
      else if(i==9)
            puts(name);
    }

    return 0;
}
