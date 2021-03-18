#include<stdio.h>
int ss(int a);
int main()
{
    int i,z;
	printf("请输入一个数:");
	scanf("%d",&i);
	z=ss(i);
	return 0;
}
int ss(int a)
{
    int i,j;
	for(i=2;i<a;i++)
	{
	   if(a%i==0)
		   break;
	}
	if(i<a)
      printf("%d不是素数\n",a);
	else
	  printf("%d是素数\n",a);
	return 0;
}