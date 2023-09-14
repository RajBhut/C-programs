#include<stdio.h>
int main()
{
int num , rem = 0 ;
scanf("%d",&num);
int check = num;
int rev = 0;
while(num!=0)
{
rem=num%10;
rev=rem +rev*10;
num=num/10;}
printf("%d",rev);

return 0;

}

