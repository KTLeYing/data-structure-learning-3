#include<stdio.h>
int swap(int *a,int *b);
int main()
{
   int m,n,*p1,*p2;
   printf("�����������:");
   scanf("%d%d",&m,&n);
   p1=&m;
   p2=&n;
   if(m>n)
   //if(*p1>*p2)
	   swap(p1,p2);
   printf("��С��������Ϊ:%d %d\n",m,n);
   return 0;
}
int swap(int *a,int *b)
{
    int t;
	t=*a;
	*a=*b;
	*b=t;
}