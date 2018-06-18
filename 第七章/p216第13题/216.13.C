#include<stdio.h>
#include<stdlib.h>  
double polya(n,x);  
int main()  
{  
    int x,n;  
    scanf("%d%d",&n,&x);  
    printf("%.2f\n",polya(n,x));  
    return 0;  
}  
double polya(int n,int x)  
{  
    double y;  
    if(n==0)  
        y=1;  
    if(n==1)  
        y=x;  
    if(n>1)  
        y=((2*n-1)*x*polya(n-1,x)-(n-1)*polya(n-2,x))/n;  
    return y;  
}