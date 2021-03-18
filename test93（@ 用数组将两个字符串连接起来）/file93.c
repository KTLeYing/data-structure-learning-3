#include<stdio.h>
int main()
{
    char x1[80],x2[40];
	int i=0,j=0;
	printf("输入字符串1:");
	scanf("%s",x1);
	printf("输入字符串2:");
	scanf("%s",x2);
	while(x1[i]!='\0')
		i++;
	while(x2[j]!='\0')
		x1[i++]=x2[j++];     //先数组元素赋值，再自加，移到下一元素
	x1[i]='\0';
	printf("\n新的字符串是:%s\n",x1);
	return 0;
}
