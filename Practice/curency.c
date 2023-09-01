#include<stdio.h>
int main(){
int num,c100 = 0,c50 = 0,c10 = 0,c5 = 0,c2=0,c1=0;
printf("enter number:");
scanf("%d",&num);

	while(num>=100)
	{
		num = num -100;
		c100++;
	
	}
	while(num>=50)
	{
		num = num -50;
		c50++;
	
	}
	 while(num >= 10 )
	{
		num = num -10;
		c10++;
	}
	 while(num >= 2 )
	{
		num = num -2;
		c2++;
	}
	while(num>=1) 
	{
		num = num -1;
		c1++;
	}

printf("%d %d %d %d %d %d", c100,c50,c10,c5,c2,c1);

return 0;
}

