#include<stdio.h>
void main()
{
int i,n,r;
char ch;
printf("enter the string");
scanf("%s",&ch);
for(i=0;i<=10000;i++)
{
n=ch%10;
r=r+n;
n=n/10;
}
}
