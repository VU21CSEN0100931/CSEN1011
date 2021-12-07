#include<stdio.h>
int main()
   {
   	int p,t,r,si,ci;
   	p=5000,t=1,r=8;
   	si=p*t*r/100;
   	printf("simple intrest:%d\n",si);
   	ci=p*(1+r/100)*t;
   	printf("compound intrest:%d\n",ci);
   }
