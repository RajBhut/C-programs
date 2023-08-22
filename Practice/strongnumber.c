#include<stdio.h>
int main()
{
	int n,c = 0,n1 , n2, sum;
	

	printf("Enter number: ");
	scanf("%d", &n);
		int result = n;
		n1 = n;
	while(n >= 0)
	{
		if(n == 0)
    	{
    	break;
		}
		if ( n<0)
		{
		return 1;
		}
		n = n/10;
		c++;
	}
	int co = c;
	int i;
	for(i =1; i <= co; i++)
	{   
		n2 = n1 
		%10;
    	sum = sum + fact(n2);
     	n1 = n1/10;
		
	}
	if( sum == result )
	printf("This is a strong number!");
	else printf("This is not a strong number");
	

 
 

    return 0;

}
int fact(int num)
{
	if(num ==0 || num == 1)
	{
		return 1;
	}
	return ( num * fact(num-1));
}

