#include <stdio.h>
int swap(int a,int b);
int main()
{  
	int x=7,y=11;
    printf("x=%d,\ty=%d\n",x,y);
    printf("swapped:\n");
    swap(&x,&y);
    printf("x=%d,\ty=%d\n",x,y);
}
int swap(int *a,int *b)
{   
	int temp;
    temp=*a;
	*a=*b; 
	*b=temp;
	return 0;
}
