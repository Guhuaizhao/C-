#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,a,n;
	int sum=0;
	int term=0;
	printf("������a\n");
	scanf("%d",&a);
	printf("������n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		term=term*10+a;
		sum=sum+term;
	}
	printf("a+aa+aaa+...+a...a=%d",sum);
	return 0;
}
