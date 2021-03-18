#include<stdio.h>
int dif(int a,int b,int c);
int min(int a,int b,int c);
int max(int a,int b,int c);
int main()
{
    int i,j,z,d;
	printf("请输入三个数:");
	scanf("%d%d%d",&i,&j,&z);
	d=dif(i,j,z);
	printf("max-min=%d\n",d);
}
int dif(int a,int b,int c)
{   int t;
    t=max(a,b,c)-min(a,b,c);
    return t;
}
int min(int a,int b,int c)
{
    int x,y;
	x=a<b?a:b;
    y=x<c?x:c;
	return y;
}
int max(int a,int b,int c)
{
  int x,y;
  x=a>b?a:b;
  y=x>c?x:c;
  return y;
}