#include<stdio.h>
int max1(int a,int b);
int max2(int a,int b,int c);
int main()
{
    int i,j,z;
	printf("请输入三个数:");
	scanf("%d%d%d",&i,&j,&z);
	printf("最大数为:%d\n",max2(i,j,z));
	return 0;
}
int max2(int a,int b,int c)
{
    int m;
	m=max1(a,b);
	m=max1(m,c);
	return m;
}
int max1(int a,int b)
{
    return a>b?a:b;
}