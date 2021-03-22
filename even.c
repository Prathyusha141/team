#include<stdio.h>
int main()
{
	int i,n=2;
	printf("enter an integer:");
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		if(i%2==n)
		{
			continue;
		}
		printf("%d \n",i);
	}
	return 0;
}
