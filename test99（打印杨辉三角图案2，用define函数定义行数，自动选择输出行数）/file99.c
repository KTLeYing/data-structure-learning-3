#include<stdio.h>
int main()
#define N 12
{
    int i,j,n,x[N][N];
	printf("ÇëÊäÈëĞĞÊı£º");
	  scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		x[i][0]=1;
		x[i][i]=1;
	}
	for(i=2;i<=n-1;i++)
	{
	   for(j=1;j<=i-1;j++)
		   x[i][j]=x[i-1][j-1]+x[i-1][j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
			printf("   ");
		for(j=0;j<=i;j++)
			printf("%6d",x[i][j]);
		    printf("\n");
    }
	return 0;
}