#include<stdio.h>
int a(int n);
int main()
{ 
	int i;
    printf("请输入一个整数:");
	scanf("%d",&i);
    printf("%d的阶乘结果为:%d\n",i,a(i));
	return 0;
}
int a(int n)
{ 
	int m;
    if(n<=1)
		return 1;
	else
	{
        m=n*a(n-1);
		return m;
	}
}