#include<stdio.h>
#include<conio.h>
simple_interest(int x,int y,int z)
{
int si;
si=x*y*z/100;
printf("%d",si);
}
void main()
{
int p,n,r;
clrscr();
printf("Enter the values:");
scanf("%d%d%d",&p,&n,&r);
simple_interest(p,n,r);
getch();
}
