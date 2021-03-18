#include<stdio.h>
int main()
{
    int i;
	char c;
	i=10;
	c='w';
	printf("变量i对应的内存单元:%d 变量i的值为:%d\n",&i,i);
	printf("变量c对应的内存单元:%d 变量c的值为:%d\n",&c,c);
	return 0;
}