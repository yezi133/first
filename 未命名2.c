#include<stdio.h>

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	
	printf("��������ʱ�䣺\n");
	scanf("%d%d",&hour1,&minute1);
	scanf("%d%d",&hour2,&minute2);
	
	int cha=0;
	
	cha	=(hour2-hour1)*60+(minute2-minute1);
	printf("ʱ�����%dʱ%d��",cha/60,cha%60);
	return 0;
}
