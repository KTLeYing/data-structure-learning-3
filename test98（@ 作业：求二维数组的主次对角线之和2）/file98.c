#include<stdio.h>
int main()
{
    int i,j,x[3][3],sum1=0,sum2=0;
	printf("����������:");
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
	printf("���Խ���Ϊ:%d;�ζԽ���Ϊ:%d\n",sum1,sum2);
	return 0;
}
