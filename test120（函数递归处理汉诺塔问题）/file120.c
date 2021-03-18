#include<stdio.h>
int hanio(int m,char a,char b,char c);
int i=0;
int main()
{
    int n;
	printf("请输入盘子的数量:");
	scanf("%d",&n);
	hanio(n,'A','B','C');
	return 0;
}
int hanio(int m,int a,int b,int c)
{
    if(m==1)
	{
	    printf("第%d次:%c棒-->%c棒\n",++i,a,c);
	}
	else
	{
	    hanio(m-1,a,c,b);
		printf("第%d次:%c棒-->%c棒\n",++i,a,c);
        hanio(m-1,b,a,c);
	}
}

