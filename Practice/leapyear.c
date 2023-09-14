#include<stdio.h>
int main(){
int year;
printf("Enter year: ");
scanf("%d",&year);
if(year %100==0 && year % 400 ==0)
{
	printf("Year is leap year!");
}
else if( year % 100 != 0 && year % 4  == 0)
{
	
	printf("Year is leap year!");
}
else{printf("This year is not a leap year");
}
return 0;
}

