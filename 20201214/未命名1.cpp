#include <stdio.h>
int main()
{
	int a[3][3]={10,12,13,14,15,16,17,18,19};
	int i,j,b;
	b=0;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			b=b+a[i][j]; 
		}
	}
	printf("%d\n",b);
 } 
