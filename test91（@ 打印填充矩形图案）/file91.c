#include<stdio.h>
int main()
{
    int i,j,k;
	char x[5]={'*','*','*','*','*'};
	for(i=0;i<=4;i++)
	{
	    for(k=1;k<=i;k++)
			printf(" ");
		for(j=0;j<=4;j++)
			printf("%c",x[j]);
		printf("\n");
	}
	return 0;
}