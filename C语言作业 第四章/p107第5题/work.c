#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	int b;
	printf("������һ��С��1000������\n");
	scanf("%f",&a);
	if(a>1000||a<0)
	{
	    printf("����������һ��С��1000������\n");
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
		



