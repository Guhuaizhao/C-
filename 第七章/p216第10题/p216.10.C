#include<stdio.h>
#include<string.h>
#define M 1000          
int main()  
{  
    int low;        
    int high;          
    int i;              
    int count;         
    int temp;          
    int low_temp;  
    int high_temp;  
    char p[M];          
    gets(p);           
    count = 0;   
    low = 0;  
    high = 0;  
    for(i = 0; i < strlen(p); i++)  
    {  
        temp = 0;   
        low_temp = i;  
        while(p[i] != ' ' && p[i] != '\0')    
        {  
             temp++;  
             i++;   
        }  
        high_temp = i-1;  
        if(temp > count)  
        {  
            count = temp;  
            low = low_temp;  
            high = high_temp;  
        }  
    }  
    for(i = low; i <= high; i++)  
    {  
        putchar(p[i]);  
    }  
    return 0;  
}  