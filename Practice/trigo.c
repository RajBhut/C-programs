#include<math.h>
#include<stdio.h>
int main(){
float ratio;
printf("Enter thita: ");;
scanf("%f",&ratio);
ratio = (ratio*3.14)/180;
printf("sin thita = %f ",sin(ratio));
printf(" cos thita = %f",cos(ratio));
printf("tan thita = %f",tan(ratio));
printf(" cot thita = %f" , 1/tan(ratio));
printf("cosec thita = %f",1/sin(ratio));
printf(" sec thita = %f" ,1/cos(ratio));



return 0;
}

