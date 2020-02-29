#include<stdio.h>

int main()
{
	//int m=10;
	//int n=30;
	for(int i=10;i<=30;i++){
		int t;
		for(t=2;t<i;t++){
			int a;
			a=i%t;
			if(a==0){
				printf("%d ",i);
				break;
			}
		}
	}
	return 0;
}
