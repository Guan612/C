#include <stdio.h>
int main()
{
	int a=1;
	int p=0,r=0;
	while(a!=0)
		{
			scanf("%d",&a);
			if(a>0)
				p++;
			else if(a<0)
				r++;
			else if(a=0)
				printf("ok");
		}
	printf("����%d������%d",p,r);		
}
