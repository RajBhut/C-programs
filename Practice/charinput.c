#include<stdio.h>
int main(){
	printf("Enter your character :");
	char chr;
	scanf("%c",&chr);

	      	if ( 0<=chr && chr <=48 || 58 <= chr && chr <= 64 || 91 <= chr && chr <= 96 || 123 <= chr && chr <= 127  )
			{
				printf("Enterd character is spacial symbol!");
				
			}
			else if (48 <= chr && chr <= 57)
			{
				printf("Enterd character is Number");
					
			}
				else if (65 <= chr && chr <= 90)
			{
				printf("Enterd character is capital latter");
				
			}
				else if (97 <= chr && chr <= 122)
			{
				printf("Enterd character is Small latter");
					
			}
	


return 0;
}

