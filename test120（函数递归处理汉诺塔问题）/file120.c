#include<stdio.h>
int hanio(int m,char a,char b,char c);
int i=0;
int main()
{
    int n;
	printf("���������ӵ�����:");
	scanf("%d",&n);
	hanio(n,'A','B','C');
	return 0;
}
int hanio(int m,int a,int b,int c)
{
    if(m==1)
	{
	    printf("��%d��:%c��-->%c��\n",++i,a,c);
	}
	else
	{
	    hanio(m-1,a,c,b);
		printf("��%d��:%c��-->%c��\n",++i,a,c);
        hanio(m-1,b,a,c);
	}
}

