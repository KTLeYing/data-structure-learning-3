/*//��1��
#include<stdio.h>
int swap(int *p1,int *p2);
int main()
{
    int m,n;
	printf("������������:");
	scanf("%d%d",&m,&n);
	swap(&m,&n);
	printf("��С��������Ϊ:%d %d\n",m,n);
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


//��2��
#include<stdio.h>
int swap(int *p1,int *p2);
int main()
{
    int m,n,*s1,*s2;
	printf("������������:");
	scanf("%d%d",&m,&n);
	s1=&m;
	s2=&n;
	swap(s1,s2);
	printf("��С��������Ϊ:%d %d\n",m,n);
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

