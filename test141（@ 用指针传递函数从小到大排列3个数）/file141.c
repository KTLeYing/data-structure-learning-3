#include<stdio.h>
int swap(int *m,int *n);
int main()
{
    int *p1,*p2,*p3,a,b,c;
	printf("please intput the numbers:");
	scanf("%d%d%d",&a,&b,&c);
    p1=&a;
	p2=&b;
	p3=&c;
	if(a>b)
	swap(p1,p2);
	if(a>c)
	swap(p1,p3);
	if(b>c)
	swap(p2,p3);
	printf("the sorted number is:%2d%2d%2d\n",*p1,*p2,*p3);
	return 0;
}
int swap(int *m,int *n)
{
    int t;
	t=*m;
	*m=*n;
	*n=t;
}