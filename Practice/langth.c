#include<stdio.h>
#include<math.h>

int main()
{
	
int n,c  ;
    printf("Ener number : " );
    scanf("%d",&n);
  int  n1 = n;
     int result = n;
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

	int i, sum, n2;

	for(i =1; i <= c; i++)
	{   
		n2 = n1%10;
    	sum = sum + pow(n2,c);
     	na = na/10;
		
	}
	if(result == sum)
    printf("This is an Armstrong number!");
    else printf("This is not an Armstrong number.");
	
    return 0;

}

