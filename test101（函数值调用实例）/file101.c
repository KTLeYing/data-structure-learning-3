#include<stdio.h>
int add(int a,int b);
int main()
{
    int i=5,j=10,a,b;
    printf("����ǰ:i=%d j=%d\n",i,j);
	printf("i+j=%d\n",add(i,j));
	printf("���ú�:i=%d j=%d\n",i,j);
	return 0;
}
int add(int a,int b)
{ 
    a+=b;
	return a;
}