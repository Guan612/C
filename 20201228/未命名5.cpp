#include <stdio.h>
int main()
{
	int a[6];
	int b;
	for(b=0;b<6;b++)
	{
		scanf("%d",*(a+b));
	}
} 
