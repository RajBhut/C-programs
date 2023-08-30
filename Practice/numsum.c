#include<stdio.h>
int main(){
int num,count =5,sum=0,rem;
printf("Enter number:");
scanf("%d",&num);
while(count != 0)
{
rem = num %10;
num = num/10;
sum = sum + rem;
count--;
}
printf("Your sum is %d",sum);

return 0;
}

