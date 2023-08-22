#include<stdio.h>
int main()
{
	int s,i,j;

    printf("Enter Number: " );
    scanf("%d", &s);
    
   for(i = 1 ; i <= s; i++)
   {
   	for(j =1 ; j <= s;j++)
   	{
   		if(i == (s/2 + 1))
   		{
   			
   			printf(" X ");
   			continue;
		   }
   	if(j == (s/2 + 1))
	   {
	   	printf(" X ");
		}
		else{
			printf(" O ");
		}	
	}
	printf("\n\n");
   }


    return 0;

}

