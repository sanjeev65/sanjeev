
#include <stdio.h>

int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a>0)
    printf("%d is a positive number",a);
    else if(a<0)
    printf("%d is a negative number",a);
    else
    printf("%d is a null number",a);
}
