#include<stdio.h>
int main()
{
    char c;
	int a,b,d;
	printf("请输入a和b的值:");
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	{
	   case '+':
		   d=a+b;
		   break;
	   case '-':
		   d=a-b;
		   break;
	   case '*':
		   d=a*b;
		   break;
	   case '/':
		   d=a/b;
		   break;
	   default:
		   printf("输入有误\n");
	}
	printf("%d%c%d=%d\n",a,c,b,d);
	return 0;
}