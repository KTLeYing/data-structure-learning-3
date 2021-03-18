#include<stdio.h>
int swap(int *a,int *b);
int main()
{
    int i,j,z;
	printf("请输入两个数:");
	scanf("%d%d",&i,&j);
	printf("交换两个数之前:i=%d,j=%d\n",i,j);
    z=swap(&i,&j);
    printf("交换两个数之后:i=%d,j=%d\n",i,j);
	return 0;
}
int swap(int *a,int *b)
{   
    int t;
	t=*a;
	*a=*b;
	*b=t;
	return (swap);
}