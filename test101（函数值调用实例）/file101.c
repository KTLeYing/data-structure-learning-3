#include<stdio.h>
int add(int a,int b);
int main()
{
    int i=5,j=10,a,b;
    printf("调用前:i=%d j=%d\n",i,j);
	printf("i+j=%d\n",add(i,j));
	printf("调用后:i=%d j=%d\n",i,j);
	return 0;
}
int add(int a,int b)
{ 
    a+=b;
	return a;
}