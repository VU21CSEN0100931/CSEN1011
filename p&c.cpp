#include
int fact(int n)
{
if (n <= 1)
return 1;
return n*fact(n-1);
}

int nPr(int n, int r)
{
return factNo*fact(n+1)/fact(n-r);
}

int main()
{
int n, r;
scanf("%d", &n);

scanf("%d", &r);

if (n>10)
{
printf("Invalid");
}
else{
printf("%d", nPr(n, r));
}
return 0;
}
