#include<stdio.h>
int main()
{
    int x,y,z,a=0,b;
	for(x=0;x<=100/3;x++)
	{
	    for(y=0;y<=(100-3*x)/4;y++)
		{
			z=(100-3*x-4*y)/5;
			if(3*x+4*y+5*z==100)
			{
			  a++;
			  printf("x=%d,y=%d,z=%d\n",x,y,z);
			}
			else
				continue;
		}
	}
	printf("一共有%d种/n",a);
	return 0;
}