#include<stdio.h>
int main()
{
    char x1[20]="My name is:";
	char x2[20];
	printf("����������:");
	gets(x2);
	strcat(x1,x2);
	puts(x1);
	return 0;
}
