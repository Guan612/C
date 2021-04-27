#include <stdio.h>
int main()
{
	int a[3][3];
	int b,c;
	printf("star\n");
	for(b=0;b<3;b++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&a[b][c]);
		}
	}
	for(b=0;b<3;b++)
	{
		for(c=0;c<3;c++)
		{
			if(b==0||c==0)
			printf("%d ",a[b][c]);
		}
		printf("\n");
	}
}
