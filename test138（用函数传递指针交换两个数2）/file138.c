/*//法1：
#include<stdio.h>
int swap(int *p1,int *p2);
int main()
{
    int m,n;
	printf("请输入两个数:");
	scanf("%d%d",&m,&n);
	swap(&m,&n);
	printf("从小到大排序为:%d %d\n",m,n);
	return 0;
}
int swap(int *p1,int *p2)
{
	int t;
    if(*p1>*p2)
	{
	   t=*p1;
	   *p1=*p2;
	   *p2=t;
	}
	return 0;
}*/


//法2：
#include<stdio.h>
int swap(int *p1,int *p2);
int main()
{
    int m,n,*s1,*s2;
	printf("请输入两个数:");
	scanf("%d%d",&m,&n);
	s1=&m;
	s2=&n;
	swap(s1,s2);
	printf("从小到大排序为:%d %d\n",m,n);
	return 0;
}
int swap(int *p1,int *p2)
{
	int t;
    if(*p1>*p2)
	{
	   t=*p1;
	   *p1=*p2;
	   *p2=t;
	}
	return 0;
}

