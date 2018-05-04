#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n,a,b,c;
	printf("请输入两个正整数\n");
	scanf("%d%d",&m,&n);
	if(m<n)
	{
		b=m;
		a=n;
	}
	else
	{
		a=m;
		b=n;
	}
	while(c=a%b)
	{
		a=b;
		b=c;
	}
	printf("最大公约数为%d",b);
	printf("最小公倍数为%d",m*n/b);
	return 0;
}
