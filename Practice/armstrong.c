#include<stdio.h>
int main(){
int rem = 0 , check ,num , sum = 0;
printf("Enter number: ");
scanf("%d",&num);
check = num;
while(num != 0)
{
	rem = num %10;
	sum = sum *10 +rem;
	num = num /10;
	
}

if(sum == check)
{
	printf("This is paladromic!");
	
}
else {
	printf("This is not paladromic");
}

return 0;
}

