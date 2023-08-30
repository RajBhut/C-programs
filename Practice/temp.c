#include<stdio.h>

int main()
{
float temp;
printf("Enter temprature ");
scanf("%f",&temp);

printf("your temprature is %0.2f",((temp - 32)*5/9) );
	
	
	return 0;
}
