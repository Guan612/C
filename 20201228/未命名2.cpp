#include <stdio.h>
int main()
{
	int a[3];
	int *p,i;
	printf("star\n");
	for (i=0;i<3;i++)
	{
		scanf("%d",a+i);//数组a开头为a【0】；a为数组地址 
	}
	/*for(p=a;p<(a+3);p++)
	{
		printf("%2d",*p) ;		
	}*/
	for(i=0;i<3;i++)
	{
		printf("%2d",*(a+i));
	}
	
}
