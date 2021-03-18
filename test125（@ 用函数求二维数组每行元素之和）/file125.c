#include<stdio.h>
int count(int x[][3],int b[],int row,int line);
int main()
{   
    int x[2][3]={{3,6,9},{1,4,7}};
	int a[2],i=2,j=3;
	count(x,a,i,j);
	for(i=0;i<=1;i++)
		printf("第%d行之和为:%d\n",i+1,a[i]);
	return 0;
}
int count(int x[][3],int b[],int row,int line)
{
    int i,j;
	for(i=0;i<=1;i++)
	{
       b[i]=0;
	   for(j=0;j<=2;j++)
	   {
	       b[i]+=x[i][j];
	   }
	}
	return (b[i]);
}