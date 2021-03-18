#include<stdio.h>
int length(char *p);
int main()
{
    int len;
	char str[20];
	printf("please intput:");
	scanf("%s",str);
	len=length(str);
	printf("the length of the string is %d\n",len);
	return 0;
}
int length(char *p)
{
     int n=0;
	 while(*p!='\0')
	 {
	    n++;
		p++;
	 }
	 return (n);
}

