#include<stdio.h>
int swap(int *p1,int *p2); 
int main()
{
    int i,j,z;
	int *p1,*p2,*p3;
	printf("请输入三个数:");
	scanf("%d%d%d",&i,&j,&z);
    p1=&i;
	p2=&j;
	p3=&z;
	if(i<j)
		swap(p1,p2);
	if(i<z)
		swap(p1,p3);
	if(j<z)
		swap(p2,p3);
	printf("从大到小排列:%d %d %d\n",i,j,z);
	return 0;
}
int swap(int *p1,int *p2)
{
    int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
	return 0;
}