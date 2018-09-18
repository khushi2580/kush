#include<stdio.h>
void main()
{

    int f1,f2,f3,n,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n<=1)
            f3=i;

    else

    f1=f2;
    f2=f3;
    f3=f1+f2;
    }
    printf("fibonacci series are:%d,%d,%d",f1,f2,f3);
    return 0;

}

