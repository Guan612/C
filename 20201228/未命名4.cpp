#include <stdio.h>
int main()
{
	int a[3]={1,2,3};
	int d[3]={0};
	int *p,b,c,e;
	for(p=a+2;p>=0;p--)//注意要先找到a的地址 
	{
		c=*p;
		printf("%2d",c);
	}
}
