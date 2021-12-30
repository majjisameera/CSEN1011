#include<stdio.h>
int main()
{
	int r,n=1;
	int i,j;
	
	printf("enter no of rows ");
	scanf("%d",&r);
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;++j)
		{
			printf("%d",n);
			n++;
		}
			printf("\n");
	}
	return 0;
}