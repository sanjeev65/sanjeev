#include <stdio.h>
void main()
{
   int a, rev= 0,i;
   printf("Enter the number to check the number is palindrome or not\n");
   scanf("%d",&a);
   i = a;
   while(i!= 0 )
   {
      rev= rev* 10;
      rev= rev+a%10;
       i= i/10;
   }
   if ( a == rev)
      printf("%d is a palindrome number.\n", a);
   else
      printf("%d is not a palindrome number.\n", a);
}



