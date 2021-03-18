#include<stdio.h>
int func(int a);
int main()
{ 
	int n;
    printf("请输入一个整数:");
	scanf("%d",&n);
    func(n);
	printf("各位数字之和为:%d",func(n));
	printf("\n");
	return 0;
}
int func(int a)
{
    int y=0;
    while(a!=0)
	{
      y=y+a%10;
      a=a/10;
	}
	return y;
}