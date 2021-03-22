#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)n
	{
		printf("enter an integer:");
		scanf("%d",&n);
		if(n<0)
		{
			break;
		}
	}
	return 0;
}
