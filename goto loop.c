#include<stdio.h>
int main ()
{
	int i=1;
	suresh:
		printf("%d\n");
		i++;
		if (i<=10)
		{
			goto suresh;
		}
		return 0;
}
