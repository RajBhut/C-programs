#include<stdio.h>
int main(){
int red,green ,blue, max;
float r,g,b,white,c =0,m =0,y =0,k;
printf("Enter value of Red: ");
scanf("%d",&red);
max = red;

printf("Enter value of Green: ");
scanf("%d",&green);
if(green > max)max = green;
printf("Enter value of Blue: ");
scanf("%d",&blue);
if(blue > max)max = blue;

if(red ==0 && green == 0 && blue ==0)
{
	
	printf("Your rgb (%d , %d , %d) is in cmyk is : (0,0,0,1)",red,green,blue);
	return 0;
}
white = max/255.0 ;
k = 1 - white;
r = red/255.0;
g = green/255.0;
b = blue/255.0;


c= ((white-r)/white);
m = ((white-g)/white);
y =((white- b)/white);


printf("Your rgb (%d , %d , %d) in cmyk is : (%0.2f,%0.2f,%0.2f,%0.2f)\n", red, green, blue, c, m, y, k);





return 0;
}

