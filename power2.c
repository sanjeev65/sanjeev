
#include <stdio.h>

void main()
{
    int a,b,c=1;
  
    printf("Enter the a:");
    scanf("%d", &a);
    printf("Enter the b :");
    scanf("%d", &b);
    for(int i=1; i<=b;i++)
    {
        c = c * a;
    }

    printf("power for %d^%d=%d",a,b,c);
}

