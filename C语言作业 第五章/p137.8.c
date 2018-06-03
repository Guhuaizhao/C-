#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,i;
	for(i=100;i<=999;i++)
	{
		a=i/100;
		b=i%100/10;
		c=i%100%10;
		if(a*a*a+b*b*b+c*c*c==i)
	    printf("Ë®ÏÉ»¨Êý%d\n",i);
	 } 
	
	return 0;
}
