#include<stdio.h>
int s(int a);
int main()
{
   int j,n;
   printf("������һ������:");
   scanf("%d",&n);
   j=s(n);
   if(j==0)
	   printf("%d��������",n);
   else
	   printf("%d������",n);
   return 0;
}
int s(int a)
{
    int i,j=1;
	for(i=2;i<=a-1;i++)
	{
		if(a%i==0)
		{
		j=0;
	     break;
		}
	}
	return j;
}