#include<stdio.h>
int main(){
int   num = 0,count = 10 ,sum = 0,min , max ;
do{
  	printf("Enter your number: ");
	scanf("%d",&num);
	
	if(count == 10)
	{
	if(num != 0)
	min = num;
	max = num;
	}
	
	sum = sum + num;
	
	if(num > max)
	{
	max = num;
	}
	
	if(num < min)
	{
		min = num;
	}
	
	count--;

  
}
while(count > 0);

float avg = (sum /10);
printf("min = %d , max = %d and avg = %0.2f sum = %d", min , max,avg,sum);

return 0;
}

