#include<stdio.h>
long int x(int a);
long int y(int b);
long int main()
{
    int i;
	long int  z;
	printf("����������һ����:");
	scanf("%d",&i);
    z=x(i);
	printf("1~x����η��Ľ����:%ld\n",z);
	return 0;
}
long int x(int a)
{
    int i,j=0;
	for(i=1;i<=a;i++)
		j=j+y(i);
	return j;
}
long int y(int b)
{
    int i;
	for(i=1;i<5;i++)
        b*=b;
	return b;
}
