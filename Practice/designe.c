#include<stdio.h>
int main(int argc, char const *argv[])
{
	
	clrscr();

   int num ;
   while(num != 10){
   
   printf("enter range");
   scanf("%d" , &num);
   int i , j;
   for( i = 0 ; i <= num ;i++)
   {
   	for( j = 0; j <= i ; j++)
   	 {
   		printf(" * ");
     }
     printf("\n");
    }

  
	getch(); 
	

    }
    return 0;
}'
'
