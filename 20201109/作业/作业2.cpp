#include <stdio.h>
int main()
{
	float s,l,a,b,c;
	s=10000;
	l=0.035;
	a=(s*l+s)+((s*l+s)*l+s*l+s);
	b=s*l*2+s;
	c=s*l*2-(s*l+((s*l+s)*l));
	printf("����һ��������%.2f\n,��������������%.2f\n,���%.2f\n",a,b,c);
	return 0;
	
}
