#include<stdio.h>
int main()
{
	int i,j,n,p[20],pr[20],pos,temp,bt[20],wt[20],tt[20],awt,att;
	printf("enter number of process :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("enter the process burst time and priority");
		printf("burst time");
		scanf("%d",&bt[i]);
		printf("priority");
		scanf("%d",&pr[i]);
		printf("p[%d]",i+1);
		p[i]=i+1;
		}
		for(i=0;i<=n;i++)
		{
			pos=i;
			for(j=i+1;j<=n;j++)
			{
				if(pr[j]<=pr[pos])
				{
					pos=j;
					
				}
				temp=pr[i];
				pr[i]=pr[pos];
				pr[pos]=temp;
				temp=bt[i];
				bt[i]=bt[pos];
				bt[pos]=temp;
				temp=p[i];
				p[i]=p[pos];
				p[pos]=temp;
			}
			wt[1]=0;
			for(i=2;i<=n;i++)
			{
				wt[i]=wt[i-1]+bt[i-1];
			}
			for(i=1;i<=n;i++)
			{
				tt[i]=wt[i]+bt[i];
				awt=awt+wt[i];
				att=att+tt[i];
			}
			printf("\n process\t\t burst time\t\t waiting time\t\t turn around time \n");
		}
			for(i=1;i<n;i++)
			{
				printf("\n p(%d)/t %d/t %d/t %d/t",i,bt[i],wt[i],tt[i]);
				printf("\n average waiting time is %f",awt);
				printf("\n average turn around time is %f",att);
				scanf("%d",i);
				return 0;
			} 
			}
			
