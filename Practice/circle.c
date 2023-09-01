#include<stdio.h>
int main(){
float x,y,r,d;
printf("Enter (x,y) cordinate and radius(r)");
scanf("%f%f%f",&x,&y,&r);
d = (x*x)+(y*y)-(r*r);
printf("%f",d);
if(d>0)printf("point is outside of the circle");
else if(d<0)printf("point is inside the circle");
else printf("point is on the circle!");




return 0;
}

