#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入一个数"); 
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		if((a%b)==0)
		printf("%d\n",b);
	}
}
