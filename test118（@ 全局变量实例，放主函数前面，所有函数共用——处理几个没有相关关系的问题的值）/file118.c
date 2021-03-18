#include<stdio.h>
int v(int a,int b,int c);
int s1,s2,s3;
int main()
{   
	int x,y,z;
    printf("请输入长、宽、高:");
	scanf("%d%d%d",&x,&y,&z);
    z=v(x,y,z);
	printf("体积为:%d,其他三个面的面积分别为:%d  %d  %d\n",z,s1,s2,s3);
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
