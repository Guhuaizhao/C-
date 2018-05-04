#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	double bonus,bon1,bon2,bon4,bon6,bon10;
	int branch;
	bon1=100000*0.1;
	bon2=bon1+100000*0.75;
	bon4=bon2+200000*0.05;
	bon6=bon4+200000*0.03;
	bon10=bon6+400000*0.015;
	printf("请输入当月利润i\n");
	scanf("%d",&i);
	branch=i/100000;
	if(branch>10)branch=10;
	switch(branch)
	{
		case0:bonus=i*0.1;break;
		case1:bonus=bon1+(i-100000)*0.075;break;
		case2:
		case3:bonus=bon2+(i-200000)*0.05;break;
		case4:
		case5:bonus=bon4+(i-400000)*0.03;break;
		case6:
		case7:
		case8:
		case9:bonus=bon6+(i-600000)*0.015;break;
		case10:bonus=bon10+(i-1000000)*0.01;
	}
	printf("应发奖金为%f\n",bonus);
	return 0;
}
