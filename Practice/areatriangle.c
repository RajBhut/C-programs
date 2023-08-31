#include<stdio.h>
#include<math.h>
int main(){
float l1 ,l2 ,l3 ,s ,area;
printf("Enter l1 , l2 ,l3: ");
scanf("%f%f%f",&l1 ,&l2 ,&l3);
s = (l1 + l2 + l3)/2;
area = sqrt( s*((s -l1)*(s-l2)*(s-l3)));
printf("area is: %f unit squer",area);

return 0;
}

