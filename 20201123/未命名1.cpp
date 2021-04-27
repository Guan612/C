#include <stdio.h>
int main()
{
	int a;
	printf("1.长方形 2.正方形 3.圆");
	scanf ("%d",&a);
	switch(a)
	{
		case 1:
			{
				int b,s1;
				printf("请输入正方形边长"); 
				scanf("%d",&b);
				s1=b*b;
				printf ("%d\n",s1);
				break;
			}
		case 2:
			{
				int c,d,s2;
				printf("请输入长和宽");
				scanf("%d%d",&c,&d); 
				s2=c*d;
				printf("%d\n",s2);
				break;
			}
		case 3:
			{
				float e,s3;
				printf("请输入半径");
				scanf("%f",&e);
				s3=e*e*3.14;
				printf("%.2f\n,s3");
				break;
			}
		default:printf("请重新输入");	
	 } 	
	return 0;
}
