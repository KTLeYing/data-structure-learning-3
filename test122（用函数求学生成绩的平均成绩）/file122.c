#include<stdio.h>
int aver(int a[10],int n);
int main()
{
    int i,z,x[10];
	printf("������ɼ�:");
	for(i=0;i<=9;i++)
		scanf("%d",&x[i]);
    z=aver(x,10)/10;
	printf("ƽ���ɼ�Ϊ:%d\n",z);
}
int aver(int a[10],int n)
{
    int i,sum=0;
	for(i=0;i<=9;i++)
       sum+=a[i];
	return sum;
}