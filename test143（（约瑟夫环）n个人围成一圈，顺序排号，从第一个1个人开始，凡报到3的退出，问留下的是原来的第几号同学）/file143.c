#include<stdio.h>
int main()
{
   int z,x,y,m,*p,num[50],i;
   printf("please intput the whole number:");
   scanf("%d",&z);
   p=num;
   for(i=0;i<z;i++)
     *(p+i)=i+1;  //Ϊz�������
   x=0; //�˳�������
   y=0; //��123����ʱ�ļ�������
   m=0; //ÿ��ѭ������һ��
   while(x<z-1)
   {
      if(*(p+m)!=0)
		  y++;
      if(y==3)
	  {
	     *(p+m)=0;
		 y=0;
		 x++;
	  }
	  m++;
	 if(m==z)
	    m=0;
   }
   while(*p==0)
	   p++;
   printf("the last one is NO.%d\n",*p);
   return 0;
}