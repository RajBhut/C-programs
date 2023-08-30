#include<stdio.h>
#include<math.h>
int main(){
int x ,y;

printf("Enter x cordinate: ");
scanf("%d",&x);
printf(" Enter y cordinate: ");
scanf("%d",&y);
float r = sqrt(x*x + y*y) ,thita = atan(y/x);
printf("cordidate is (%0.2f , %0.2f)", r ,thita);

return 0;
}

