void auto_static(void)
{ 
   int var_auto=0;		//�Զ�������ÿ�ε��ö����³�ʼ��,����ƽʱ�ں�������ʱ�Ӵ���һ�㶼���Զ�����
   static int var_static=0;		//��̬�ֲ�������ֻ��ʼ��1��
   printf("var_auto=%d, var_static=%d\n", var_auto, var_static);
   ++var_auto;
   ++var_static;
}
void main()
{ 
	int i;
    for(i=0; i<5; i++)
	{
		printf("the %d time to transfer is:",i+1);
		auto_static();
	}
}					