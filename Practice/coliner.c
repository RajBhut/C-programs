#include<stdio.h>
//area of triangle using points(x1,y1),(x2,y2),(x3,y3) = 1/2(x1(y2-y1)+x2(y3-y1)+x3(y1-y2))
int main(){
float x1,x2,x3,y1,y2,y3,a;
printf("enter x1 ,y1 cordinate:");
scanf("%f%f",&x1,&y1);
printf("enter x2 ,y2 cordinate:");
scanf("%f%f",&x2,&y2);
printf("enter x3 ,y3 cordinate:");
scanf("%f%f",&x3,&y3);
a = 1/2*(x1*(y2-y1)+x2*(y3-y1)+x3*(y1-y2));
if(a == 0)printf("Given points are coliner!");
else printf("Given points are not coliner");
return 0;
}

