#include<stdio.h>
int main()
{
	int i=1,num;
	printf("Enter the value of N:");
	scanf("%d",&num);
	while(i<=num)
	{
		printf("%d\n",i*2-1);
		i++;
	}
}