#include<stdio.h>
int main()
{
    int i,j,k,x[12][12];
	for(i=0;i<=11;i++)
	{
		x[i][0]=1;
		x[i][i]=1;
	}
	for(i=2;i<=11;i++)
	{
	   for(j=1;j<=i-1;j++)
		   x[i][j]=x[i-1][j-1]+x[i-1][j];
	}
	for(i=0;i<12;i++)
	{
		for(j=0;j<35-3*i;j++)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("%6d",x[i][j]);
		    printf("\n");
    }
	return 0;
}