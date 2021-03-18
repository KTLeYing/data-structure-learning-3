#include<stdio.h>
int swap(int *a,int *b);
int main()
{
    int m,n;
	printf("请输入两个数:");
	scanf("%d%d",&m,&n);
	printf("交换前:m=%d,n=%d\n",m,n);
    swap(&m,&n);
	printf("交换后:m=%d,n=%d\n",m,n);
	return 0;
}
int swap(int *a,int *b)
{
    int t;
	t=*a;
	*a=*b;
	*b=t;
    //printf("m=%d,n=%d\n",*a,*b);
    return 0;
}
