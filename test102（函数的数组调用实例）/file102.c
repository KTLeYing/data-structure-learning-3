#include<stdio.h>
#define M 10
void sort(int a[],int n);
int main()
{
    int i,arr[M]={12,34,56,7,24,15,90,68,50,33};
	for(i=0;i<M;i++)
	printf("%d ",arr[i]);
	printf("\n");
	sort(arr,M);
	printf("×îºóÅÅÐòÎª:");
	for(i=0;i<M;i++)
		printf("%3d",arr[i]);
	    printf("\n");
	return 0;
}
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
		    if(a[i]>a[j])
			{
			   t=a[i];
			   a[i]=a[j];
			   a[j]=t;
			}
		}	
}
