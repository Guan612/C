#include <stdio.h>
int main()
{
	int a;
	printf("1.������ 2.������ 3.Բ");
	scanf ("%d",&a);
	switch(a)
	{
		case 1:
			{
				int b,s1;
				printf("�����������α߳�"); 
				scanf("%d",&b);
				s1=b*b;
				printf ("%d\n",s1);
				break;
			}
		case 2:
			{
				int c,d,s2;
				printf("�����볤�Ϳ�");
				scanf("%d%d",&c,&d); 
				s2=c*d;
				printf("%d\n",s2);
				break;
			}
		case 3:
			{
				float e,s3;
				printf("������뾶");
				scanf("%f",&e);
				s3=e*e*3.14;
				printf("%.2f\n,s3");
				break;
			}
		default:printf("����������");	
	 } 	
	return 0;
}
