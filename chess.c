#include<stdio.h>
int main()
{
	int c1,c2,r1,r2,sum;
	printf("enter first coordinates ");
	scanf("%d %d",&c1,&r1);
	printf("enter second coordinates ");
	scanf("%d %d",&c2,&r2);
	sum = c1+c2+r1+r2;
	if(sum%2==0)
	{
		printf("same colour");
	}
	else
	{
		printf("different colour");
	}
}
