#include<stdio.h>
int main()
{
	int i,j,k,m,n;
    char s1[10];
    char s2[10];
    printf("Please enter s1: ");
    gets(s1);
    m=strlen(s1);
    printf("Please enter s2: ");
    gets(s2);
    n=strlen(s2);
    for(i=0,j=0;i<m||j<n;i++,j++)
	{
        if(s1[i]==s2[j])
            continue;
        else
            k=s1[i]-s2[j];
    }
    printf("%d\n",k);
    return 0;
}
