#include <stdio.h>
int main()
{
	int a; 
	printf("请输入一个数");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("鱼\n");
		break;
		case 2:printf("鸡\n"); 
		break;
		case 3:printf("豆腐\n");
		break;
		case 4:printf("肉\n");
		break; 
		default:printf("没有，请重新输入");
		break; 
	 } 
}
