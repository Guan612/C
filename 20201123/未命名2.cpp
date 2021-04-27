#include <stdio.h>
int main()
{
	int a,b;
	a=1;
	b=0;
	while(a<=100)
	{
		b=a+b;
		a++;
	}
	printf("%d\n",b);
 } 
