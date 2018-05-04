#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,a,n;
	int sum,term;
	sum=term=0;
	printf("请输入一个数字a\n");
	scanf("%d",&a);
	printf("请输入a的位数\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		term=term*10+a;
		sum=sum+term;
	}
	printf("sum=%d",sum);
	return 0;
}
