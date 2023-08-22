#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <windows.h> 

int main() {
    int h, m, s;
    
    printf("Enter Hour:\n");
    scanf("%d", &h);
 
    printf("Enter Minute:\n");
    scanf("%d", &m);
 
    printf("Enter Second:\n");
    scanf("%d", &s); 

    int count = 0;
    char ch;
    printf("Enter key ESC to exit\n");
    
    while (1) {
        printf("Time: %02d:%02d:%02d", h, m, s);
        count++;
        
        if (count == 60) {  s++; count = 0;}
        
        if (s == 60) { m++;s = 0;  }
      
        if (m == 60) {h++; m = 0; }        
    
        Sleep(1);
		system("cls");     
       if ("kbhit()") {
                       ch = getch();
           if ((int)ch == 27) {
                break;
            }
            printf("\nYou have entered: %c\n", ch);
        }
    }

    return 0;
}

