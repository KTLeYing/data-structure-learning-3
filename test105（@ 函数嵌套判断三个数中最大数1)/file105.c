#include<stdio.h>
int max1(int a,int b);
int max2(int a,int b,int c);
int main()
{
   int i,j,z,k;
   printf("�����������:");
   scanf("%d%d%d",&i,&j,&z);
   k=max2(i,j,z);
   printf("�����Ϊ:%d\n",k);
   return 0;
}
int max2(int a,int b,int c)
{
   int m;
   m=max1(a,b);
   m=max1(m,c);
   return m;
}
int max1(int a,int b)
{
  int x;
  x=(a>b?a:b);
  return x;
} 
