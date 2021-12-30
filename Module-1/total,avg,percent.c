#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	int total,avg,percent;
	
	printf("enter marks of maths =");
	scanf("%d",&a);
	
	printf("\n enter marks of english =");
	scanf("%d",&b);
	
	printf("\n enter marks of social =");
	scanf("%d",&c);
	
	printf("\n enter marks of sciene =");
	scanf("%d",&d);
	
	printf("\n enter marks of hindi =");
	scanf("%d",&e);
	
total=a+b+c+d+e;
avg=a+b+c+d+e/5;
percent=(a+b+c+d+e*100)/500;

	printf("total = %d\n",a+b+c+d+e);	
	
	printf(" avg = %d\n",a+b+c+d+e/5);

	printf("percent = %d\n",(a+b+c+d+e*100)/500);
	
}