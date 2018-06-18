#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("请输入数组元素：\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
		printf("\n");
		printf("数组为：\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			printf("%4d",a[i][j]);
              	printf("\n");
		}
		printf("\n");
		printf("对角线的和：\n");
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			if(i==j||2-i==j)
				sum+=a[i][j];
			
			printf("%d\n",sum);
		return 0;
}

