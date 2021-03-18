#include<stdio.h>
int main()
{
    int i,n;
	char str1[20]="I am a student";
	char str2[20]="I am from China";
	i=0;
    while(str1[i]!='\0')
	{
	   str2[i]=str1[i];
	   i++;
	}
	str1[i]='\0';
	printf("%s\n",str2);
	return 0;
}