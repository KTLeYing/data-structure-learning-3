#include<stdio.h>
int swap(int *a,int *b);
int main()
{
    int i,j,z;
	printf("������������:");
	scanf("%d%d",&i,&j);
	printf("����������֮ǰ:i=%d,j=%d\n",i,j);
    z=swap(&i,&j);
    printf("����������֮��:i=%d,j=%d\n",i,j);
	return 0;
}
int swap(int *a,int *b)
{   
    int t;
	t=*a;
	*a=*b;
	*b=t;
	return (swap);
}