#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x1,x2;
	float a;
	printf("ÇëÊäÈëaµÄÖµ\n");
	scanf("%f",&a);
	x2=1.0;
	while(fabs(x1-x2)>=0.00001)
	{
		x1=x2;
		x2=(x1+a/x1)/2.0;
	}
	printf("x2=%f",x2);
	return 0;
}
