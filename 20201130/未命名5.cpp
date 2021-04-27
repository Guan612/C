#include <stdio.h>
int main()
{
	int a,b;
	b=0;
	for(a=1;a<=100;a++)
	{
		b=a+b;
		if(0==a%3)
		continue;
		printf("a=%d\n",a);
	}
	//printf("%d",b);
 } 
