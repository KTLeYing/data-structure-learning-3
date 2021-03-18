#include<stdio.h>
int main()
{
	int a=0,b=0,d=0;
    char c;
	printf("please input some chars:");
	c=getchar();
	while((c=getchar())!='\n')
	{
	   if(c>='a' && c<='z' || c>='A' && c<='Z')
		   a++;
	   else
		   if(c>='0' && c<='100')
			   b++;
		   else
			   d++;
	}
	printf("ÇëÊä³ö:alphabet:%d,number is:%d,other is:%d\n",a,b,d);
	return 0;
}
