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
	printf("������һ���ַ�\n");
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
	printf("����Ӣ���ַ���%d��\n",i);
	printf("����������%d��\n",j);
	printf("���пո���%d��\n",k);
	printf("���������ַ���%d��\n",l);
	return 0;
}
