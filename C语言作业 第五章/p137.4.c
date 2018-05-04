#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int i,j,k,l;
	i=0;
	j=0;
	k=0;
	l=0;
	printf("请输入一行字符\n");
	scanf("%c",&c);
	while((c=getchar())!='\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		i++;
		else if(c>='0'&&c<='9')
		j++;
		else if(c==32)
		k++;
		else
		l++;
	}
	printf("其中英文字符有%d个\n",i);
	printf("其中数字有%d个\n",j);
	printf("其中空格有%d个\n",k);
	printf("其中其他字符有%d个\n",l);
	return 0;
}
