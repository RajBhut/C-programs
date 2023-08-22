#include<stdio.h>
#include<math.h>
int main()
{
int num,count,test;
printf("Enter a number :");
scanf("%d" , &num);
int i;
for( i = 2 ; i <= ceil(sqrt(num)); i++)
{
	test = num %i;
	if(test == 0)
	count = 1;
	
}
if((count == 0 && num >1) || (num == 2 || num == 3))
printf("Given number is prime number!");
else printf("Given number is not a prime number");
    

    return 0;

}

