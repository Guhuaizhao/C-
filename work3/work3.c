#include<stdio.h>
int main()
{
	float grade;
	printf("������ɼ�\n");
	scanf("%f",&grade);
	if(grade>=90)
	{
		printf("'A'");
	}else if(grade>=80)
	{
		printf("'B'");
	}else if(grade>=70)
	{
		printf("'C'");
	}else if(grade>=60)
	{
		printf("'D'");
	}
	else
	{
		printf("'E'");
	}
return 0;
}
