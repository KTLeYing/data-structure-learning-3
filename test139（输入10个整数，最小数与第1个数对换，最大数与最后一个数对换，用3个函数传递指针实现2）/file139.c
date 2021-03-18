#include<stdio.h>
void intput(int*x);
void max_min(int*y);
void output(int*z);
int main()
{
   int num[10];
   intput(num);
   max_min(num);
   output(num);
   return 0;
}
void intput(int*x)
{
    int i;
	printf("Please intput numbers:");
	for(i=0;i<=9;i++)
	   scanf("%d",&x[i]);
}
void max_min(int*y)
{
   int *min,*max,*p,t;
   min=max=y;
   for(p=y+1;p<=y+9;p++)
   {
      if(*max<*p)
	      max=p;
      else
		  if(*p<*min)
			  min=p;
   }
   t=y[0];
   y[0]=*min;
   *min=t;
   if(max==y)
	   max=min;
   t=y[9];
   y[9]=*max;
   *max=t;	   
}
void output(int*z)
{
   int *p;
   printf("the final numbers are:");
   for(p=z;p<=z+9;p++)
	   printf("%d ",*p);
   printf("\n");
}