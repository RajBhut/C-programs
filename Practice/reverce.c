#include<stdio.h>
int main(){
	printf("Enter number: ");
	
int num, rev = 0,rem , check;
scanf("%d",&num);
check = num;
while(num != 0)
{
	rem = num % 10;
	rev = rev * 10 + rem;
	num = num / 10;
	
}
printf("reverce number is: %d ",rev);
if(rev == check)printf("Both are same number!");
else printf("Both are not same!");
return 0;
}

