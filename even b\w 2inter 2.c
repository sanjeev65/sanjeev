
#include <stdio.h>
main()
{
int i,a,b;
printf("enter the range:");
scanf("%d %d",&a,&b);
printf("Print Odd Numbers are :");
for(i=a; i<= b; i++)
{
if (i%2==0)
printf("\n %d", i);
}
return 0;
}
