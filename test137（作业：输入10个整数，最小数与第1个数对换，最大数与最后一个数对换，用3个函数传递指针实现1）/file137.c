#include<stdio.h>
void input(int *x);
void max_min(int *);
void output(int *);
int main()
{
   int num[10];
   input(num);
   max_min(num);
   output(num);
   return 0;
}
void input(int *x)
{
    int i;
	printf("please intput 10 numbers:");
	for(i=0;i<=9;i++)
		scanf("%d",&x[i]);
}
void max_min(int *num)
{
    int t,*p,*max,*min;
	max=min=num;
	for(p=num+1;p<num+10;p++)
	{
	    if(*p>*max)
			max=p;
		else
			if(*p<*min)
			    min=p;
	}
	t=num[0];
	num[0]=*min;
	*min=t;
    if(max==num)
	    max=min;
	t=*num;
	*num=*max;
	*max=t;
}
void output(int *num)
{
    int *p;
	printf("the final number is:");
    for(p=num;p<num+10;p++)
	   printf("%d ",*p);
	printf("\n");
}