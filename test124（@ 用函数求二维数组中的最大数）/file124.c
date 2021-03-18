#include<stdio.h>
int max(int y[][5],int n);
int main()
{
    int i,j,x[5][5];
	printf("请输入数据:");
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
          scanf("%d",&x[i][j]);
	max(x,5);
	printf("最大数为:%d\n",max(x,5));
	return 0;
}
int max(int y[][5],int n)
{
    int i,j,max;
	max=y[0][0];
    for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
		{
			if(y[i][j]>max)
				max=y[i][j];
		}
		return (max);
}
