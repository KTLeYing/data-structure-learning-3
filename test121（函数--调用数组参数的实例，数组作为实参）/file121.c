#include<stdio.h>
int large(int x,int y);
int m=0,n=0,k=0;
int main()
{
    int a[10],b[10],i;
	printf("请输入a数组数据:");
	for(i=0;i<=9;i++)
	  scanf("%d",&a[i]);
	printf("请输入b数组数据:");
	for(i=0;i<=9;i++)
	  scanf("%d",&b[i]);
    for(i=0;i<=9;i++)
	{   
		if(large (a[i],b[i])==1)
			n++;
		else
			if(large (a[i],b[i])==-1)
				m++;
			else
			    k++;
	}
	printf("n=%d; m=%d; k=%d\n",n,m,k);
}
int large(int x,int y)
{ 
	int t;
    if(x>y)
		t=1;
	else
		if(x<y)
			t=-1;
		else
			t=0;
    return t;
}

