#include <stdio.h>
int main()
{
	int a;
	printf("����");
	scanf("%d",&a);
	if(a>0)
	{
		printf("+");
	} 
	else if(a<0)
	{
		printf("-");
	}
	else if(a==0)
	{
		printf("0"); 
	}
	return 0;
}
