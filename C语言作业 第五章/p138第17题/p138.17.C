#include<stdio.h>
int main()
{
	int i,j,k;
	for(i='x';i<='z';i++)
		for(j='x';j<='z';j++)
		{
			if(i!=j)
				for(k='x';k<='z';k++){
					if(i!=k&&j!=k){
						if(i!='x'&&k!='x'&&k!='z')
							printf("a-%c\nb-%c\nc-%c",i,j,k);
					}
				}
		}
		return 0;
}