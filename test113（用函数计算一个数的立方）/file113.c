#include<stdio.h>
int sqrt(int a);
int main()
{
    int n,z;
	printf("������һ����:");
	scanf("%d",&n);
	z=sqrt(n);
	printf("���������η�Ϊ:%d\n",z);
	return 0;
}
int sqrt(int a)
{
    int i;
	i=a*a*a;
	return (i);
}