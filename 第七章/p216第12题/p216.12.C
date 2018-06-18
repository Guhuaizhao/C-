#include<stdio.h>
#include<math.h>  
int main()  
{  
    double solut(double,double,double,double ); 
    double a,b,c,d;  
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);  
    printf("%.2f",solut(a,b,c,d));  
    return 0;  
}  
  
double solut(double a,double b,double c,double d)  
{  
    double x=1,x0;  
    do  
    {  
        x0=x;  
        x=x0-(((a*x+b)*x+c)*x+d)/((3*a*x+2*b)*x+c);  
    }  
    while(fabs(x-x0)>=1e-5);
    return x;  
}  