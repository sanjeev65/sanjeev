
#include <stdio.h>
void main()
{
   int i, rev= 0,a;
   printf("Enter the number to check the number is palindrome or not\i");
   scanf("%d",&i);
   a = i;
   while(a!= 0 )
   {
      rev= rev* 10;
      rev= rev+a%10;
       a= a/10;
   }
   if ( i == rev)
      printf("%d is a palindrome number.\n", i);
   else
      printf("%d is not a palindrome number.\n", i);
}
