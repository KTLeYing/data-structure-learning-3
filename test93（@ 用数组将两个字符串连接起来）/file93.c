#include<stdio.h>
int main()
{
    char x1[80],x2[40];
	int i=0,j=0;
	printf("�����ַ���1:");
	scanf("%s",x1);
	printf("�����ַ���2:");
	scanf("%s",x2);
	while(x1[i]!='\0')
		i++;
	while(x2[j]!='\0')
		x1[i++]=x2[j++];     //������Ԫ�ظ�ֵ�����Լӣ��Ƶ���һԪ��
	x1[i]='\0';
	printf("\n�µ��ַ�����:%s\n",x1);
	return 0;
}
