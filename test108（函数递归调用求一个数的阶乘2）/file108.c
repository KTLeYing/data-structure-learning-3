#include<stdio.h>
int a(int n);
int main()
{ 
	int i;
    printf("������һ������:");
	scanf("%d",&i);
    printf("%d�Ľ׳˽��Ϊ:%d\n",i,a(i));
	return 0;
}
int a(int n)
{ 
    if(n<=1)
		return 1;
	else
		return n*a(n-1);
}