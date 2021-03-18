#include<stdio.h>
int s1(int a,int b);
int s2(int c);
int main()
{
    int i,j,x;
	printf("请输入两个数:");
	scanf("%d%d",&i,&j);
	x=s1(i,j);
	printf("两次同时调用后的两数相乘之和:%d\n",x);
	return 0;
}
s1(int a,int b)
{
     int i,j;
	 i=s2(a);
	 j=s2(b);
	 return (i+j);
}
s2(int c)
{
    int i,sum=1;
	for(i=1;i<=c;i++)
		sum*=i;
	return (sum);
}