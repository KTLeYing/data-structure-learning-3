#include<stdio.h>
int main()
{
    int i,j,x[3][3],a=0,b=0;
	printf("����������:");
	for(i=0;i<=2;i++)
	{
	   for(j=0;j<=2;j++)
		   scanf("%d",&x[i][j]);
	}
	for(i=0;i<=2;i++)
	{
	   for(j=3-(i+1);j<=(2-i);j++)
		   a=a+x[i][j];  
	}
	for(i=0;i<=2;i++)
	{
	   for(j=i;j<=i;j++)
		   b=b+x[i][j];
	}
	printf("���Խ���֮��Ϊ:%d ;  �ζԽ���֮��Ϊ:%d",b,a);
	return 0;
}
