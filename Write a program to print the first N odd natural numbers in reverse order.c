#include<stdio.h>
int main()
{
    int i,N;
    
    printf("Enter the number of terms:");
    scanf("%d",&N);
    i=N;
    while(i<=N&&i>0)
    {
    	
    	printf("%d\n",2*i-1);
		i--;
	}

    
}