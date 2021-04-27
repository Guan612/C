#include <stdio.h>
void change(char *p)
{
	while(*p!='\0')
	{
		if(*p>='a'&&*p<='z')
		*p=*p-32;
	}
}

