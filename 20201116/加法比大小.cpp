#include <stdio.h> 
int main()
{
	int a,b,c;
	printf("ÊäÈë"); 
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		c=a+b;
	}
	else if(a<b)
	{
		c=a-b;
	}
	else if(a==b)
	{
		c=0;
	}
	printf("%d\n",c);
	return 0;
 } 
