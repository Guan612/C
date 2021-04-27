#include <stdio.h>
int main()
{
	int a[20];
	int i,sum=2;
	a[0]=1;a[1]=1;
	for(i=2;i<20;i++)
	{
		a[i]=a[i-1]+a[i-2];
		sum=a[i]+sum;
	}
	printf("%d",sum);
	 
 } 
