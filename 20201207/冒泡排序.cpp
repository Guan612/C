#include <stdio.h>
int main()
{
	float a[5];
	float c,k;
	int i=0,j;
	printf("请输入5个数:\n");
	for(i=0;i<5;i++)
	{	
		scanf("%f",&c);
		a[i] = c;
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(a[j]>a[j+1])
			{
				k = a[j+1];
				a[j+1] = a[j];
				a[j] = k;
			}
		}
	}
	printf("排序结果\n");
	for(i=0;i<5;i++)
	{
		printf("%.2f\n",a[i]);
	}
	return 0; 
}
