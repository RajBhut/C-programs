#include<math.h>
#include<stdio.h>
int main(){
float t ,v;
printf("Enter t and v : ");
scanf("%f %f",&t,&v);
 float wcf = 35.74 + 0.6215*(t)+ (0.4275*(t)-35.75)* pow(v,0.16);
 printf("the wind chill factor is : %f", wcf);

return 0;
}

