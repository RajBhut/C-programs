#include<stdio.h>
#include<math.h>
int main(){
int num,  j;
for(num =1 ; num <= 300 ; num++)
{
if(num ==1 )
{
	printf("1 is not a prime\n");
	continue;
}
 int isprime = 1;
	for(j = 2 ; j <= sqrt(num); j++)
{
	if(num%j == 0)
	{
		isprime = 0;
		break;
	}
}
if(isprime)
{
	printf("%d ",num);
}

	
}



return 0;
}

