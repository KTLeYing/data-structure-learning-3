#include<stdio.h>
int main()
{
    char x[20];
	printf("请输入密码:");
	scanf("%s",x);
	if(strcmp(x,"i-love-you")==0)     //前面x数组为本人输入的密码，后面的为系统正确的密码，0代表输入的密码与系统密码相对应，没有错误
		printf("pass\n");
	else
		printf("denied\n");
	return 0;
}