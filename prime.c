#include <stdio.h>
void main()
{
    int a, i,y= 0;

    printf("Enter a positive integer: ");
    scanf("%d",&a);

    for(i=2; i<=a/2; ++i)
    {
        if(a%i==0)
        {
            y=1;
            break;
        }
    }
    if (y==0)
        printf("%d is a prime number.",a);
    else
        printf("%d is not a prime number.",a);
}

