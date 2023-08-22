#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
	char Name[6] , Rollno[3], Collname[10] , city[10]; 
	
	

    printf(" ->Enter your name:" );
    scanf("%s" , &Name);
    printf("You name is : %s \n" , Name);
    printf("->Enter your Rollno: ");
    scanf("%s", &Rollno);
    printf("your Roll is : %s \n", Rollno);
    printf("->Enter your Collage name: \n");
     scanf("%s", &Collname);
    printf("your Collage name is : %s \n", Collname);
    printf("->Enter your city: \n");
     scanf("%s", &city);
    printf("your city is : %s", city);
    
getch();
   // return 0;
    

}

