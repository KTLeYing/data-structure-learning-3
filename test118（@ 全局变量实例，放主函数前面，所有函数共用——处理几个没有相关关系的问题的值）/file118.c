#include<stdio.h>
int v(int a,int b,int c);
int s1,s2,s3;
int main()
{   
	int x,y,z;
    printf("�����볤������:");
	scanf("%d%d%d",&x,&y,&z);
    z=v(x,y,z);
	printf("���Ϊ:%d,���������������ֱ�Ϊ:%d  %d  %d\n",z,s1,s2,s3);
}
int v(int a,int b,int c)
{
    int i;
	i=a*b*c;
	s1=a*b;
	s2=a*c;
	s3=b*c;
	return i;
}
