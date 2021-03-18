#include<stdio.h>
int sqrt(int a);
int main()
{
    int n,z;
	printf("请输入一个数:");
	scanf("%d",&n);
	z=sqrt(n);
	printf("该数的三次方为:%d\n",z);
	return 0;
}
int sqrt(int a)
{
    int i;
	i=a*a*a;
	return (i);
}