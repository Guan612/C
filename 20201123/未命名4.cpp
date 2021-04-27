#include <stdio.h>
int main()
{
	int a,b;
	b=0;
	for(a=1;a<=10;a++)
	{
		b=a*a+b;
	}
	printf("%d\n",b);
}
