#include<stdio.h>
int main ()
{
	int n,i,flag;
	printf("enter a integer:");
	scanf("%d",&n);
	flag=1;
	for(i=2;i<n;++i)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf(" number is a prime number");
	}
	else
	{
		printf("number is composite number");
	}
	return 0;
}
