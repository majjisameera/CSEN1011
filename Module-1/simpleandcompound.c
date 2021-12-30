#include<stdio.h>
int main()
{
 int p,t,r;
 printf("enter principal amount= ");
 scanf("%d",&p);
 printf("\n enter rate of interest= ");
 scanf("%d",&r);
 printf("\n enter time period= ");
 scanf("%d",&t);
 
 printf("\n simple interest=%d ",(p*t*r/100));
 
 printf("\n compound interest=%d ",(p*(1+r/100)^t));
 return 0;
}
