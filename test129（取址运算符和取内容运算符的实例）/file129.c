#include<stdio.h>
int main()
{
    int i=10;
    int *p;
    p=&i;
    printf("i=%d  *p=%d\n",i,*p);
	*p=5;
	printf("i=%d  *p=%d\n",i,*p);
	return 0;
}