#include<stdio.h>
int main()
{
    char c;
	int num=0,word=0,line=1,zf=0;
	while((c=getchar())!='#')
	{
		zf++;
		if(c==' ')
			word=0;
		else
			if(word==0)
			{
				word=1;
				num++;
			}
			else
				if(c=='\n')
				{
					line++;
				    word=0;
				}
	}
	printf("num is:%d   zf is:%d   line is:%d\n",num,zf,line);
	return 0;
}