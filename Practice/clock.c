#include<stdio.h>
#include <conio.h>
#include<time.h>
int main()
{
int h,m,s;


printf("Enter Hour:\n");
 scanf("%d",&h);
 
printf("Enter Minute:\n");
 scanf("%d",&m);
 
 printf("Enter Second:\n");
 scanf("%d",&s); 
 	
 

int count = 0;


	
	char ch;
	printf("Enter key ESC to exit \n");
	
	while (1) {
		
		printf("Time: %02d : %02d : %02d",h,m,s);
		count++;
		if(count ==61)
		{
			s++;
			count = 0;
		}
		if(s ==61)
		{
			s = 0;
			m++;
		}
		if(m ==61)
		{
			m = 0;
			h++;
		}
		sleep(1);
	system("cls");
		
		
		
		
		if (kbhit) {
			// fetch typed character into ch
			
			
			ch = getch();
			if ((int)ch == 27)
				// when esc button is pressed, then it will exit from loop
				break;
			printf("You have entered : %c\n", ch);
		}

}

 

   

}

