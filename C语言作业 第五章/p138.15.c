#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x0,x1,x2,fx0,fx1,fx2;
	while(fx1*fx2>0)
	{
		printf("ÊäÈëx1,x2µÄÖµ\n");
		scanf("%f,&f",&x1,&x2);
		fx1=2*x1*x1*x1-4*x1*x1+3*x1-6;
		fx2=2*x2*x2*x2-4*x2*x2+3*x2-6;
	}
	while(fabs(fx0)>=1e-5);
	{
		x0=(x1+x2)/2;
		fx0=2*x0*x0*x0-4*x0*x0+3*x0-6;
		if(fx0*fx1<0)
		{
			x2=x0;
			fx2=fx0;
		}
		else
		{
			x1=x0;
			fx1=fx0;
		}
	}
	printf("x=%f\n",x0);
	return 0;
}
