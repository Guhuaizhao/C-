#include<stdio.h>
#include<string.h>
void qipao(char s[10][20]);
void main()
{
char str[10][20];
int i;
printf("input string:\n");
for(i=0;i<10;i++)
scanf("%s",&str[i]);
qipao(str);
printf("\nthe order is:\n");
for(i=0;i<10;i++)
printf("%s ",str[i]);
printf("\n");
}
void qipao(char s[10][20])
{
int i,j,k;
char t[10];
for(i=0;i<9;i++)
{
k=i;
for(j=i+1;j<10;j++)
{
if(strcmp(s[k],s[j])>0)
{
strcpy(t,s[k]);
strcpy(s[k],s[j]);
strcpy(s[j],t);
}
}
}
}