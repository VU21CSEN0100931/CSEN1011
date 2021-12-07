#include<stdio.h>
int main()
{
	int a,b,sum=0,n;
	printf("Enter the number");
	scanf("%d",&b);
	n=b;
	while(b>0)
	{
		a=b%10;
		sum=sum+(a*a*a);
		b=b/10;
	}
    if(n==sum)	
    printf("Armstrong number");
    else
    printf("not arm strong number");
    return 0;
}