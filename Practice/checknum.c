#include<stdio.h>
#include<math.h>
int main()
{
	int a , result;

    printf("enter number");
    scanf("%d", &a);
    
    result = a + abs(a);
    if(result == 0)
    {
    	printf("your given number is negative");
    	printf("Diku i love you :) <3");

	}
	else
	{
		printf("your number is positive");
		printf("Diku i love you :) <3");
	}
    return 0;

}

