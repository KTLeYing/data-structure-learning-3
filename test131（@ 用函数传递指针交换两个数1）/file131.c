#include<stdio.h>
int swap(int *a,int *b);
int main()
{
    int m,n;
	printf("������������:");
	scanf("%d%d",&m,&n);
	printf("����ǰ:m=%d,n=%d\n",m,n);
    swap(&m,&n);
	printf("������:m=%d,n=%d\n",m,n);
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
