#include<stdio.h>
int main(){
int x ,y;
printf("Enter point(x,y): ");
scanf("%d%d",&x,&y);
if(x && y == 0)printf("Point is on origin!");
else if(x==0)printf("Point is on y-axis");
else if(y==0)printf("Point is on x-axis");
else printf("point is not on any axis");

return 0;
}

