#include<stdio.h>
int swap(int *a,int *b);
int main()
{
   int m,n,*p1,*p2;
   printf("请输出两个数:");
   scanf("%d%d",&m,&n);
   p1=&m;
   p2=&n;
   if(m>n)
   //if(*p1>*p2)
	   swap(p1,p2);
   printf("从小到大排列为:%d %d\n",m,n);
   return 0;
}
int swap(int *a,int *b)
{
    int t;
	t=*a;
	*a=*b;
	*b=t;
}