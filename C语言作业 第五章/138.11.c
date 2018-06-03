#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float sn=100.0,hn=sn/2;
	int n;
	for(n=2;n<=10;n++)
	{
		sn=sn+2*hn;
		hn=hn/2;
	}
	printf("总共经过的米数%f\n",sn);
	printf("第十次反弹的高度%f\n",hn);
	return 0;
}
