#include<stdio.h>

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	
	printf("输入两个时间：\n");
	scanf("%d%d",&hour1,&minute1);
	scanf("%d%d",&hour2,&minute2);
	
	int cha=0;
	
	cha	=(hour2-hour1)*60+(minute2-minute1);
	printf("时间差是%d时%d分",cha/60,cha%60);
	return 0;
}
