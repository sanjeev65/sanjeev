
#include<stdio.h>
void main()
{
    int i,j,k=0;
    printf("enter the number=");
    scanf("%d",&i);
    j=i;
  while(j!=0)
  {
   j=j/10;
   ++k;
  }
  printf("numbers of digits for %d=%d",i,k);
}
