#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int I,a,b,c,d,e,f;
	printf("请输入当月的利润I\n");
	scanf("%d",&I);
	if(I<=100000)
	{
		a=I*0.1;
		printf("奖金=%d\n",a);
	}
	if(I>100000&&I<=200000)
	{
		b=10000+(I-100000)*0.075;
		printf("奖金=%d\n",b);
	}
	if(I>200000&&I<=400000)
	{
		c=100000*(0.1+0.075)+0.05*(I-200000);
		printf("奖金=%d\n",c);
	}
	if(I>400000&&I<=600000)
	{
		d=100000*(0.1+0.075)+200000*0.05+0.03*(I-400000);
		printf("奖金=%d\n",d);
	}
	if(I>600000&&I<=1000000)
	{
		e=100000*(0.1+0.075)+200000*0.05+0.03*200000+0.015*(I-600000);
		printf("奖金=%d\n",e);
	}
	if(I>1000000)
	{
		f=100000*(0.1+0.075)+200000*0.05+0.03*200000+0.015*400000+0.01*(I-1000000);
		printf("奖金=%d\n",f);
	}
	return 0;
}
