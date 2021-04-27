#include <stdio.h>
int main()
{
	int a; 
	void star(char pat, int x);
	star('*',8);
	star('#',8);
}
void star(char pat, int x)
{
	int i;
	for(i=1;i<x;i++)
		printf("%c",pat);
}
