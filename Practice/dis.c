#include<stdio.h>
// 1 km = 3280.83ft,39370.07inch.
// 1 feet = 12 inches.
//1 inche = 2.54cm.
int main(){
printf("Enter distance (in km): ");
float dis;
scanf("%f",&dis);
printf("The distence is: %0.2f meters \n",(dis *1000));
printf("The distence is: %0.2f feets \n",(dis * 3280.83));
printf("The distence is: %0.2f inches\n",(dis * 39370.07));
printf("The distence is: %0.2f centimeters\n",(dis * 100000));

return 0;
}

