#include <stdio.h>
int main()
{
	int a,b;
	b=0;
	a=1;
	for(;a<=10;a++)
	{
		b=a+b;
		printf("%d\n",b);
	}
}
