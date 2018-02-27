
#include<stdio.h>
	void main()
	{
	    int a,i,b;
	    printf("enter the values:");
	    scanf("%d",&b);
	    a=b;
	    for(i=1;i<b;i++)
	    {
	        a=a*i;
	        printf("%d\n",a);
	    }
}
