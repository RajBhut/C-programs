#include<stdio.h>
int main()
{
	
int s ,i ,j =1 ,k=1;
    printf("Enter raw :" );
    scanf("%d",&s);
    for(i = 0 ; i < s ; i++)
    {
    	for(j=0;j <= i ; j++)
    	{
    		printf("%d",k);
    		k++;
		}
		printf("\n");
	}
    
  

    return 0;

}

