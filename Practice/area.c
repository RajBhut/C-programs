#include<stdio.h>
int main(){
float Pi = 3.14 , l ,b,rad;
printf("Enter radius of circle: ");
scanf("%f",&rad);
printf("Enter length and breadth of ractangle: ");
scanf("%f %f",&l,&b);
printf("cicumfurance of circle is :%0.2f \n",(2*Pi*rad));
printf("area of circle is: %f",(Pi*rad*rad));
printf("area of ractangle is: %0.2f and parameter of ractangle is: %0.2f",(l*b),(2*(l+b)));


return 0;
}

