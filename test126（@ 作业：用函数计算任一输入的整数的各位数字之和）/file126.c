#include<stdio.h>
int func(int a);
int main()
{ 
	int n;
    printf("������һ������:");
	scanf("%d",&n);
    func(n);
	printf("��λ����֮��Ϊ:%d",func(n));
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