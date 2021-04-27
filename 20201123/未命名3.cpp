#include <stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=9;a++)
	{
		for(b=1;b<=9;b++)
		{
			c=a*b;
			printf("%d*%d=%d\n",a,b,c);
		}
	}
}
