#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,i;
	double sum=0;
	a=2,b=1;
	for(i=0;i<20;i++)
	{
		sum=sum+1.0*a/b;
		c=b;
		b=a;
		a=a+c;
	}
	printf("%f\n",sum);
	return 0;
}
