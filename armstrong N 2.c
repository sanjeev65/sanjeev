
#include<stdio.h>
int main()
{
    int a,b,c,result=0;
    scanf("%d",&a);
    b=a;
    while (b!= 0)
    {
        c=b%10;
        result+=c*c*c;
        b/=10;
    }

    if(result==a)
        printf("Armstrong number");
    else
        printf("not an Armstrong number");

    return 0;
}
