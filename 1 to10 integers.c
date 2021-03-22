#include<stdio.h>
int main ()
{
	int i,n,sum=0;
	for(i=1;i<=5;i++)
	{
		printf("enter an integer \n");
		scanf("%d",&n);
		if(n<0)
		{
			continue;
		}
		sum=sum+n;
	}
	printf("the sum is %d",sum);
	return 0;
}
