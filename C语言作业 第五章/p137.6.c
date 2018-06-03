#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n;
	long int sum=0,f=1;
	printf("«Î ‰»Înµƒ÷µ\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
		sum=sum+f;
	}
	printf("%d\n",sum);
	return 0;
}
