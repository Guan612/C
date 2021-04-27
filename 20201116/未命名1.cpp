#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	switch(a)
	{
		case'a':printf("85-100\n");
		case'b':printf("70-80\n");
		case'c':printf("<60\n");
		default:printf("worng");
	}
}
