void auto_static(void)
{ 
   int var_auto=0;		//自动变量：每次调用都重新初始化,我们平时在函数调用时接触的一般都是自动变量
   static int var_static=0;		//静态局部变量：只初始化1次
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