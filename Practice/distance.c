#include<math.h>
#include<stdio.h>
int main(){
	float l1,l2,g1,g2,d;
	printf("Enter l1 \n");
	scanf("%f",&l1);
	l1 = (3.14*l1)/180;
	printf("Enter l2 \n");
		scanf("%f",&l2);
		l2 = (3.14*l2)/180;
	printf("Enter g1 \n");
		scanf("%f",&g1);
		g1 = (3.14*g1)/180;
	printf("Enter g2 \n");
		scanf("%f",&g2);
		g2 = (3.14*g2)/180;
	d = 3963 *acos(sin(l1)*sin(l2) +cos (l1)*cos(l2)*cos(g2-g1));
	printf("Your distence is: %f ",d);


return 0;
}

