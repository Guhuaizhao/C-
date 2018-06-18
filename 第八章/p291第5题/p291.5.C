#include<stdio.h>
#include <stdlib.h>  
int main(int argc, const char *argv[])  
{  
    int i,n,m,k,num[100];  
    int *p=NULL;  
    printf("input the num: ");  
    scanf("%d",&n);  
    p=num;  
    k=0;    
    m=0;  
    for(i=0;i<n;i++)  
        *(p+i)=i+1;          
        i=0; 
    while(m<n-1)     
    {  
        if(*(p+i)!=0)   
            k++;
        if(k==3)    
        {  
            *(p+i)=0;  
            k=0;  
            m++;  
        }
        i++;
        if(i==n)  
            i=0;  
    } 
    for(i=0;i<n;i++)   
    {  
        if(*(p+i)!=0)  
            break;  
    }
    printf("left is %d\n", *(p+i)); 
    return 0;  
}  
