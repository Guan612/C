#include <stdio.h>
int  main()
{
	int biji(int,int);
	int a,b,c;
	a=3;b=2;
	c=biji(a,b);
	printf("%d",c);
}
int biji(int x,int y)
{
	int z;
	z=x+y;
	return (z);
}
