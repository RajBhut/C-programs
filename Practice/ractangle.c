#include<stdio.h>
int main(){
float l ,b ,p,a;
printf("enter Length:");
scanf("%f",&l);
printf("enter breadth:");
scanf("%f",&b);
p = 2*(l+b);
a = (l * b);
printf("Area of ractangle is: %0.2f",a);
printf("perameter of ractangle is: %0.2f",p);
if(a >p)printf("Area is greater than parameter");


return 0;
}

