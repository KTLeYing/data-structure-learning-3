#include<stdio.h>
int main()
{
    char str[]="http://guoqianying***.com";
	char *p=str;
	int len=strlen(str),i;
	for(i=0;i<len;i++)
	{
	    printf("%c",*(p+i));
	}
	printf("\n");
	for(i=0;i<len;i++)
	{
	    printf("%c",p[i]);
	}
    printf("\n");
	for(i=0;i<len;i++)
	{
	    printf("%c",*(str+i));
	}
	printf("\n");
	return 0;
}