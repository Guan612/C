#include <stdio.h>
int main()
{
	int a[5];
	int i,k;
	printf("����5����:\n"); 
	for(i=0;i<5;i++)
	{
		scanf("%d",&k);
		a[i]=k;
	} 
	printf("������:\n");
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		continue;
			printf("%4d",a[i]);	
	}
}
