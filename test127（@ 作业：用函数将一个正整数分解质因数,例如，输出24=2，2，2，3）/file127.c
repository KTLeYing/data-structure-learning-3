#include<stdio.h>
int susu(int a);
int main()
{
	int n,z;
    printf("请输入一个整数:");
	scanf("%d",&n);
    printf("%d=",n);
	z=susu(n);
	return 0;
}
int susu(int a)
{
   int i,t;
   for(i=2;i<a;i++)
   {
       if(a%i==0)
	   {
	      break;
	   }
   }
   if(i>=a)
	   printf("1*%d\n",a);
   else
   {
       for(t=2;t<a;t++)
	   {
	      if(a%t==0)
		  {
			  printf("%d",t);
		  }
		  break;
	   }
	   a=a/t;
	   for(i=2;i<=a;i++)
	   {   
		   while(a%i==0)
		   {
		          printf("*%d",i);
				  a=a/i;
		   }
	   }
	   printf("\n");
	   return 0;
   }
}
