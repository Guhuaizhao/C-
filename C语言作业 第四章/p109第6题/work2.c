#include<stdio.h>
int main()
{
float x,y;
printf("������x��ֵ\n");
scanf("%f",&x);
if(x<1)
{
	y=x;
	printf("y=%f\n",y);
}else if(x>=10)
{
	y=3*x-11;
	printf("y=%f\n",y);
}
else
{
	y=2*x-1;
	printf("y=%f\n",y);
}
return 0;
}

