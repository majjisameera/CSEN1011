#include<stdio.h>
int main()
{
	int n,r,rev;
	r=0;
	printf("enter number=");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rev=n%10;
		r=(r*10)+rev;
		n/=10;
    }
    printf("reverse num= %d",r);
	return 0;
	
}