#include<stdio.h>
int main()
{
	int i=1,p,N;
	printf("Enter the number for table:");
	scanf("%d",&N);
	printf("Table of %d:\n",N);
	while(i<=10)
	{
		p=i*N;
		printf("%d*%d=%d\n",N,i,p);
		i++;
	}
}