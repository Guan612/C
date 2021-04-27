#include <stdio.h>
int main()
{
	int a=100,b=10;
	int *p1,*p2;
	p1=&a;p2=&b;
	printf("%d %d\n",a,b);
	printf("%d %d\n",*p1,*p2);
	printf("%d %d\n",p1,p2);
} 
