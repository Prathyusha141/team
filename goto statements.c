#include<stdio.h>
int main ()
{
	int i=1;
	praneetha:
		printf("%d\n");
		i++;
		if(i<=10)
		{
			goto praneetha;
		}
		return 0;
}
