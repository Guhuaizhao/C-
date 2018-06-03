#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x0,x1,f,f1;
	x1=1.5;
	while(fabs(x0-x1)>=1e-5)
	{
		x0=x1;
		f=2*x0*x0*x0-4*x0*x0+3*x0-6;
		f1=6*x0*x0-8*x0+3;
		x1=x0-f/f1;
	}
	printf("方程的根为%f\n",x1);
	return 0;
}
