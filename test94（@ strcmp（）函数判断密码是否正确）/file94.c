#include<stdio.h>
int main()
{
    char x[20];
	printf("����������:");
	scanf("%s",x);
	if(strcmp(x,"i-love-you")==0)     //ǰ��x����Ϊ������������룬�����Ϊϵͳ��ȷ�����룬0���������������ϵͳ�������Ӧ��û�д���
		printf("pass\n");
	else
		printf("denied\n");
	return 0;
}