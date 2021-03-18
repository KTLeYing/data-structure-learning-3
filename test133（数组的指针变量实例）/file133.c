#include<stdio.h>
int main()
{
    int i,*p;
	int x[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	p=x;
	for(i=0;i<=11;i++)
	printf("*p%d=%d\n",i,*p++);
	printf("%d\n",*(*(x+2)+2));
	return 0;
}