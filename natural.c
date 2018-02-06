
#include<stdio.h>
void main()
{
    int a,n,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        sum+=a;
    }
    printf("sum of first %d given natural number=%d",n,sum);
}

