#include<stdio.h>
 int main()
{
char mbl[100];
int i,item,rate,quantity,total,final,len;
printf("Enter the mobile number:");
scanf("%s",mbl);
len=strlen(mbl);
if(len!=10)
{
printf("Invalid entry\n");
}
else
{
printf("Enter the number of items:");
scanf("%d",&item);
final=0;
for(i=1;i<=item;i++)
{
printf("Enter the quantity:");
scanf("%d",&quantity);
printf("Enter the rate:");
scanf("%d",&rate);
total=quantity*rate;
final=final+total;
}
if(final>0)
{
printf("The total price is %d",final);
}
else
{
printf("Invalid amount");
}
}
}
