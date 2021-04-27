#include <stdio.h>
int main()
{
	int suzu(float x[],int y);
	float a[3];
	int i,j,e;
	e=3;
	printf("star:\n");
	for(i=0;i<2;i++)
	{
		scanf("%f",&j);
		j=a[i];
	}
	suzu(a,3);
 } 
 void suzu(float x[],int y)
 {
 	int k;
 	for(k=0;k<y;k++)
 	{
 		x[k]=(int)x[k];
 		printf("%d",x[k]);
	 }
	 
 }
