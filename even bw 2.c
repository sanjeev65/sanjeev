
#include <stdio.h>
main()
{
int a,b,c;
printf("enter the range:");
scanf("%d %d",&b,&c);
printf("Print Odd Numbers are :");
for(a=b; a<= c; a++)
{
if (a%2==1)
printf("\n %d", a);
}
return 0;
}
