#include <stdio.h>
int main()
{
	float r,s,d;
	printf("请输入圆的半径:");
	scanf("%f",&r);
	s=r*r*3.14;
	d=2*r*3.14;
	printf("半径:%.2f,  周长:%.2f,\n",r,s);
	printf("           面积:%.2f\n",d);
	return 0;
}
