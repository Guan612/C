#include <stdio.h>
int main()
{
	float a,b;
	printf("ÇëÊäÈëa,b");
	scanf("%f%f",&a,&b);
	if(a>b)
		printf("%.2f>%.2f",a,b);
	else if (a<b)
		printf("%.2f<%.2f",b,a);
	else if (a==b)
		printf("%.2f=%.2f",a,b);
	return 0; 
}
