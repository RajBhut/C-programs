#include<stdio.h>
int main(){
	float a1,a2,a3;
printf("Enter first angle:");
scanf("%f",&a1);
printf("Enter second angle:");
scanf("%f",&a2);
printf("Enter therd angle:");
scanf("%f",&a3);
if(a1 + a2 +a3 != 180){printf("This is not valid triangle");
return 0;
}
else printf("This is valid triangle!");

return 0;
}

