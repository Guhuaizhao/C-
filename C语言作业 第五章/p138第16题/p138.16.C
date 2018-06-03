#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<5;i++){
		for(j=0;j<4-i;j++)
			printf(" ");
		for(k=1;k<2*i;k++)
			printf("*");
		printf("\n");
	}
	for(i=1;i<4;i++){
		for(j=0;j<i;j++)
			printf(" ");
		for(k=1;k<8-2*i;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}