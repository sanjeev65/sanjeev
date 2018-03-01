
#include <stdio.h>
int main(void) {
	int n,i,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=n*i;
		printf("\n%d*%d=%d",n,i,c);
	}
	return 0;
}
