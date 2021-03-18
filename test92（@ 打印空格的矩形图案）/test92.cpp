#include<stdio.h>
int main()
{
    int i,j,k;
	for(i=1;i<=5;i++)
	{
	   for(j=1;j<=13;j++)
	   {
	       if(j<i)
		      printf(" ");
	       else
			   if(j<=8+i)
			   {
			   if(i%2!=0)
			   {
			     if(j%2!=0)
			       printf("*");
		         else
			        printf(" ");
			   }
			   else
			   {
				  if(j%2==0)
					  printf("*");
				  else
					  printf(" ");
			   }
			   }
			   else
				   printf(" ");
	   }
	   printf("\n");
	}
	return 0;
}