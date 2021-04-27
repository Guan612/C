#include <stdio.h>
int main()
{
	int a[10]={1,22,3,55,34,22,44,55,88,77};
	int i,k;
	int min=a[0];
	for(i=0;i<9;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("最小值是：%d\n",min);
	 
}
