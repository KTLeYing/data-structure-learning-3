#include<stdio.h>
int main()
{
    char c;
	int a,b,d;
	printf("������a��b��ֵ:");
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
		   printf("��������\n");
	}
	printf("%d%c%d=%d\n",a,c,b,d);
	return 0;
}