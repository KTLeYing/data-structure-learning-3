#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,m,z=0;
	printf("please input a number:");
	scanf("%d",&m);
    j=sqrt(m);
	for(i=2;i<=m-1;i++)
	{
       if(m%i==0)
	   {
		   z++;
		  break;
	   }
	}
	if(z==0)
		printf("this number is a sushu\n");
	else
		printf("this number is not a sushu\n");
	return 0;
}
