#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n,a,b,c;
	printf("����������������\n");
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
	printf("���Լ��Ϊ%d",b);
	printf("��С������Ϊ%d",m*n/b);
	return 0;
}
