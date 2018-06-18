#include<stdio.h>
void main()
{
    void copy(char *,int ,int );
    int n,m;
    char string[100];
    printf("enter a number n : ");
    scanf("%d",&n);
    printf("enter a string : ");
    scanf("%s",&string);
    printf("enter a number m :");
    scanf("%d",&m);
    copy(string,n,m);
    return 0; 
    }
    void copy(char *str,int n,int m)
	{
        int i,j;
        char string[100];
        char *p=string;
        i=m-1;
        j=0;
        str=str+i;
        for(;i<n;i++,j++)
		{
            *(p+j)=*(str++);
            printf("%c\n",*(p+j) );
        }
    }