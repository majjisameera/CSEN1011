#include int main(){
struct customer 
{
char name[15];
int amount;
char mobile num[10];
}
n[2];   
for(int i=0;i<2;i++)  
{
scanf("%s",n[i].name);
scanf("%d",&n[i].amount);
if(n[i].amount<0){
printf("Invalid amount");
return 0;
}
scanf("%s",n[i].mobile num);
if(strlen(n[i].mobile num)!=10){
printf("Invalid number");
return 0;
}
int j=0;
while(n[i].mobile num[j]!='\0')
{
if(n[i].mobile_number[j]>='0' && n[i].mobile_number[j]<='9')
j+=1;
else{
printf("Invalid entry");
return 0;
}
}

}
int s=n[0].amount+n[1].amount;
printf("%d",s);
}
