#include<stdio.h>
int main()
{
	int i=1,p,N;
	printf("Enter the number of terms:");
	scanf("%d",&N);
	while(i<=N)
	{   
	   p=i*i*i;
		printf("%d\n",p);
		i++;
	}
}