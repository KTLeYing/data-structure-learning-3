#include<stdio.h>
int ss(int a);
int main()
{
    int i,z;
	printf("������һ����:");
	scanf("%d",&i);
	z=ss(i);
	return 0;
}
int ss(int a)
{
    int i,j;
	for(i=2;i<a;i++)
	{
	   if(a%i==0)
		   break;
	}
	if(i<a)
      printf("%d��������\n",a);
	else
	  printf("%d������\n",a);
	return 0;
}