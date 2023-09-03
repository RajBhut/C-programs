#include<stdio.h>
int main(){
//int num , rem , newnum = 0 , num1  , num2 , ans;
//printf("Enter number  :");
//scanf("%d",&num);
//num1 = ((num /10000)+1)*10000 +1111;
//num2 = (num - ((num/10000)*10000));
//ans = num1 + num2;
//
//
//printf(" The number is :%d",ans);
int newnum = 0, mul = 1 , num , rem ;
printf("Enter your number: ");
scanf("%d",&num);
while(num != 0)
{
	rem = num %10;
	if(rem == 9)
	{
		rem = 0;
	newnum = rem * mul +newnum ;
	mul = mul *10;
	num = num /10;	
	}
	else{
	rem = rem+1;
	newnum = rem * mul +newnum;
	mul = mul *10;
	num = num /10;	
		
	}
	
}
printf("The answer is: %d", newnum);


return 0;
}

