#include<stdio.h>
int main()
{
	int i=10,j=5;
	int *pi;
	pi=&i;
	printf("i=%d;j=%d;*p=%d\n",i,j,*pi);
	pi=&j;
	printf("i=%d;j=%d;*p=%d\n",i,j,*pi);
	return 0;
}