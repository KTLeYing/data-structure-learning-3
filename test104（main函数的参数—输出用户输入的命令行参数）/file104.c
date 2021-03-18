#include<stdio.h>
int main(int z,char *j[])
{
    int i;
	for(i=0;i<z;i++)
		printf("第%d个参数:%s\n",i,j[i]);
	return 0;
}