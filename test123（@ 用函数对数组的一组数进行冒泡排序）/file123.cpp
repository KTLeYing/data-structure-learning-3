#include<stdio.h>
void sorted(int x[10],int n);
int main()
{
    int i,j,y[10];
	printf("请输入数据:");
	for(i=0;i<=9;i++)
	   scanf("%d",&y[i]);
	printf("最后排序为:");
	sorted(y,10);
	for(i=0;i<=9;i++)
	   printf("%4d",y[i]);
	   printf("\n");
	return 0;
}
void sorted(int x[10],int n)
{
    int i,j,t;
	for(i=0;i<=n-2;i++)
	{
	    for(j=i+1;j<=n-1;j++)
		{
			if(x[i]>x[j])
			{ 
		      t=x[i];
			  x[i]=x[j];
			  x[j]=t;
			} 
		}
	}
}
