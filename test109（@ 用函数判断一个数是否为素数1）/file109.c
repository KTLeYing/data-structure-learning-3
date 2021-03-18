#include<stdio.h>
#include<math.h>
int s(int n);
int main()
{ 
   int n,z;
   printf("请输入一个数:");
   scanf("%d",&n);
   z=s(n);
   if(z==0)
      printf("%d不是素数\n",n);
   else
      printf("%d是素数\n",n);
   return 0;
}
int s(int n)
{
     int i,k=1;
	 int j;
	 j=sqrt(n);
	 for(i=2;i<=j;i++)
	 {
		if(n%i==0)
		{
		   k=0;
		   break;
		}
	 }
	return k;
}
