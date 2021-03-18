#include<stdio.h>
int a(int t[][3],int n);
int b(int t[][3],int n); 
int main()
{
    int i,j,z,m;
	int x[3][3];
	printf("请输入数据:");
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			scanf("%d",&x[i][j]);
	z=a(x,3);
    m=b(x,3);
	printf("主对角线之和为:%d\n",z);
	printf("次对角线之和为:%d\n",m);
	return 0;
}
int a(int t[][3],int n)
{  
	int i,j,c=0;
    for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
		{
		    if(i==j)
				c=c+t[i][j];
		}
	return c;
}
int b(int t[][3],int n)
{
    int i,j,c=0;
	for(i=0,j=2;i<=2,j>=0;i++,j--)
       c=c+t[i][j];
	return c;
}