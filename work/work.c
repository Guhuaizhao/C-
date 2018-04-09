#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	int b;
	printf("请输入一个小于1000的正数\n");
	scanf("%f",&a);
	if(a>1000||a<0)
	{
	    printf("请重新输入一个小于1000的正数\n");
        scanf("%f",&a);
		b=(int)sqrt(a);
		printf("%d\n",b);
	}
	else
	{
        b=(int)sqrt(a);
		printf("%d\n",b);
	}
return 0;
}
		



