#include<stdio.h>


int main(void)
{
	int n;
	scanf("%d",&n);
	printf(" ");
	for(int i=0;i<n;i++)
		printf("o ");
	printf("\n");
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
			printf(" ");
		printf("o");
		if(i<n/2)
		{
			for(int j=0;j<n-2-2*i;j++)
				printf(" ");
			printf("o");
			for(int j=0;j<2*i-1;j++)
				printf(" ");
			printf("o");
			for(int j=0;j<n-2-2*i;j++)
				printf(" ");
			printf("o");
		}
		if(i==n/2)
			for(int j=0;j<n/2;j++)
				printf(" o");
		if(i>n/2)
		{
			for(int j=0;j<2*(n-i-2)+1;j++)
				printf(" ");
			if(i!=n-1)
				printf("o");
		}
		printf("\n");
	}
	
	return 0;
}
