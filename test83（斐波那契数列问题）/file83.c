#include<stdio.h>
int main()
{
    int f1=1,f2=1,i,sum=0;
	for(i=1;i<=10;i++)
	{
	  sum=f1+f2;
	  f1=f2;
	  f2=sum;
	}
	printf("%d\n",sum);
	return 0;
}


//或(C++)
/*
#include<stdio.h>
#include<iostream>
#include<cstdlib>
#include<string.h>

using namespace std;

int F1(int n)   //递归法
{
    if(n<2)
        return 1;
    else
        return F1(n-1)+F1(n-2);

}

int F2(int n)            //循环法
{
    int i,f,f0=1,f1=1;
    if(n<2)
        return 1;
    for(i=0;i<n-1;i++)
    {
        f=f0+f1;
        f0=f1;
        f1=f;
    }
    return f;
}

int main()
{
   int z,i;
   cin>>z;
   for(i=0;i<=z;i++)
   {
       cout<<F1(i)<<" ";
   }
   cout<<endl;
   for(i=0;i<=z;i++)
   {
       cout<<F2(i)<<" ";
   }
   cout<<endl;
}
*/
