#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5;
	printf("Enter marks of first subject: ");
	scanf("%f",&s1);
	printf("Enter marks of second subject: ");
	scanf("%f",&s2);
	printf("Enter marks of therd subject: ");
	scanf("%f",&s3);
	printf("Enter marks of fourth subject: ");
	scanf("%f",&s4);
	printf("Enter marks of fifth subject: ");
	scanf("%f",&s5);
	if(s1>100  || s2>100 ||s3 >100||s4 > 100||s5 >100)
{
		printf("You entered invalid marks!");
	return 0;
}
	if(s1<0  || s2<0 ||s3 <0||s4 < 0||s5 <0)
{
	printf("You entered invalid marks!");
	return 0;
}
float sum = s1+s2+s3+s4+s5;
printf("totle mark is: %f ",sum);
printf("Your percentage is: %f", (sum*100)/500);


return 0;
}

