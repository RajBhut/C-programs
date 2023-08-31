#include<stdio.h>
int main(){
int c , d , t;
printf("Enter c :");
scanf("%d",&c);
printf("Enter d:");
scanf("%d",&d);
t = c;
c = d;
d = t;
printf("value of c is %d and value of d is %d ", c ,d);
return 0;
}

