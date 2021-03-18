#include<stdio.h>
int main()
{
    int i,j,x[3][3],sum1=0,sum2=0;
	printf("请输入数据:");
	for(i=0;i<=2;i++)
	{  for(j=0;j<=2;j++)
	     scanf("%d",&x[i][j]);
    }
	for(i=0;i<=2;i++)
	{
	   if(i==i)
		   sum1+=x[i][i];
	}
	for(i=0,j=2;i<=2,j>=0;i++,j--)
	   sum2+=x[i][j];
	printf("正对角线为:%d;次对角线为:%d\n",sum1,sum2);
	return 0;
}
