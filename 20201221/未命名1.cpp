#include <stdio.h>
int compare(int x,int y)
 {
 	int z;
 	if(x>y)
 		z=1;
	else if(x<y)
	 	z=-1;
	else if(x=y)
		z=0;
	return(z);
  } 
int main()
{
	int a,b,c;
	printf("star:");
	scanf("%d%d",&a,&b);
	c=compare(a,b);
	printf("%d",c);
 }
 
